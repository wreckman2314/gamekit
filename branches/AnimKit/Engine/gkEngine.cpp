/*
-------------------------------------------------------------------------------
    This file is part of OgreKit.
    http://gamekit.googlecode.com/

    Copyright (c) 2006-2010 Charlie C.

    Contributor(s): xat.
-------------------------------------------------------------------------------
  This software is provided 'as-is', without any express or implied
  warranty. In no event will the authors be held liable for any damages
  arising from the use of this software.

  Permission is granted to anyone to use this software for any purpose,
  including commercial applications, and to alter it and redistribute it
  freely, subject to the following restrictions:

  1. The origin of this software must not be misrepresented; you must not
     claim that you wrote the original software. If you use this software
     in a product, an acknowledgment in the product documentation would be
     appreciated but is not required.
  2. Altered source versions must be plainly marked as such, and must not be
     misrepresented as being the original software.
  3. This notice may not be removed or altered from any source distribution.
-------------------------------------------------------------------------------
*/
#include "OgreRoot.h"
#include "OgreConfigFile.h"
#include "OgreRenderSystem.h"
#include "OgreStringConverter.h"
#include "OgreFrameListener.h"

#include "gkEngine.h"
#include "gkWindowSystem.h"
#include "gkWindow.h"
#include "gkScene.h"
#include "gkSceneManager.h"
#include "gkLogger.h"
#include "gkUtils.h"
#include "gkLogicManager.h"
#include "gkBlendFile.h"
#include "gkBlendLoader.h"
#include "gkRenderFactory.h"
#include "gkUserDefs.h"
#include "gkTextManager.h"
#include "gkDynamicsWorld.h"
#include "gkDebugScreen.h"
#include "gkDebugProperty.h"
#include "gkTickState.h"
#include "gkDebugFps.h"
#include "gkStats.h"
#include "gkMessageManager.h"
#include "gkMeshManager.h"
#include "gkSkeletonManager.h"
#include "gkGroupManager.h"
#include "gkGameObjectManager.h"
#include "gkResourceGroupManager.h"
//#include "gkAnimationManager.h"
#include "gkParticleManager.h"

#ifdef OGREKIT_USE_NNODE
#include "gkNodeManager.h"
#endif

#ifdef OGREKIT_USE_LUA
#include "Script/Lua/gkLuaManager.h"
#endif

#ifdef OGREKIT_OPENAL_SOUND
# include "Sound/gkSoundManager.h"
#endif

#ifdef OGREKIT_COMPILE_OGRE_SCRIPTS
# include "gkFontManager.h"
#endif

#include "External/Ogre/gkOgreBlendArchive.h"


using namespace Ogre;


// shorthand
#define gkEnginePrivate             gkEngine::Private
#define ENGINE_TICKS_PER_SECOND     gkScalar(60)

// tick states
gkScalar gkEngine::m_tickRate = ENGINE_TICKS_PER_SECOND;







class gkEnginePrivate : public FrameListener, public gkTickState
{
public:
	Private(gkEngine* par)
		:       gkTickState((int)ENGINE_TICKS_PER_SECOND),
		        engine(par),
		        windowsystem(0),
		        curScene(0),
		        debug(0),
		        debugPage(0),
		        debugFps(0),
				archive_factory(0),
				timer(0)

	{
		timer = new btClock();
		timer->reset();
		curTime = timer->getTimeMilliseconds();

		plugin_factory = new gkRenderFactoryPrivate();
		archive_factory = new gkBlendArchiveFactory();
	}

	virtual ~Private()
	{
		delete timer;
		delete plugin_factory;
		delete archive_factory;
	}


	// one full update
	void tickImpl(gkScalar delta);
	void beginTickImpl(void);
	void endTickImpl(void);


	bool frameStarted(const FrameEvent& evt);
	bool frameRenderingQueued(const FrameEvent& evt);
	bool frameEnded(const FrameEvent& evt);

	gkEngine*                   engine;
	gkWindowSystem*             windowsystem;       // current window system
	gkScene*                    curScene;			// current scene
	gkSceneArray				scenes;
	gkRenderFactoryPrivate*     plugin_factory;     // static plugin loading
	Ogre::Root*                 root;
	gkDebugScreen*              debug;
	gkDebugPropertyPage*        debugPage;
	gkDebugFps*                 debugFps;
	
	btClock*					timer;
	unsigned long				curTime;

	gkBlendArchiveFactory*		archive_factory;
};






gkEngine::gkEngine(gkUserDefs* oth)
	:       m_root(0),
	        m_window(0),
	        m_initialized(false),
	        m_ownsDefs(oth != 0),
	        m_running(false)
{
	m_private = new gkEnginePrivate(this);
	if (oth != 0)
		m_defs = oth;
	else
		m_defs = new gkUserDefs();
}




gkEngine::~gkEngine()
{

	if (m_initialized)
		finalize();


	// persistent throughout
	gkLogger::disable();

	if (!m_ownsDefs)
	{
		delete m_defs;
		m_defs = 0;
	}
}



void gkEngine::initialize()
{
	if (m_initialized) return;


	gkUserDefs& defs = getUserDefs();
	gkLogger::enable(defs.log, defs.verbose);

	if (defs.rendersystem == OGRE_RS_UNKNOWN)
	{
		gkPrintf("Unknown rendersystem!\n");
		return;
	}

	m_root = new Root("", "");
	m_private->plugin_factory->createRenderSystem(m_root, defs.rendersystem);
	m_private->plugin_factory->createParticleSystem(m_root);
	m_private->archive_factory->addArchiveFactory();	

	const RenderSystemList& renderers = m_root->getAvailableRenderers();
	if (renderers.empty())
	{
		gkPrintf("No rendersystems present\n");
		return;
	}
	m_root->setRenderSystem(renderers[0]);

	m_root->initialise(false);

	m_private->windowsystem = new gkWindowSystem();
	


	// gk Managers
	new gkResourceGroupManager();
	new gkSceneManager();
	new gkLogicManager();
#ifdef OGREKIT_USE_NNODE
	new gkNodeManager();
#endif
	new gkBlendLoader();
	new gkTextManager();
	new gkMessageManager();
	new gkMeshManager();
	new gkSkeletonManager();
	new gkParticleManager();
	new gkGroupManager();
	new gkGameObjectManager();


//	new gkAnimationManager();

#ifdef OGREKIT_USE_LUA
	new gkLuaManager();
#endif

#ifdef OGREKIT_COMPILE_OGRE_SCRIPTS
	new gkFontManager();
#endif

#ifdef OGREKIT_OPENAL_SOUND
	new gkSoundManager();
#endif

	initializeWindow();

	// create the builtin resource group
	gkResourceGroupManager::getSingleton().createResourceGroup(GK_BUILTIN_GROUP);

	gkParticleManager::getSingleton().initialize();

	// debug info
	m_private->debug = new gkDebugScreen();
	m_private->debug->initialize();

	m_private->debugPage = new gkDebugPropertyPage();
	m_private->debugPage->initialize();

	m_private->debugFps = new gkDebugFps();
	m_private->debugFps->initialize();
	m_private->debugFps->show(defs.debugFps);

	// statistics and profiling
	new gkStats();

	m_initialized = true;
}




void gkEngine::initializeWindow(void)
{
	if (m_private->windowsystem && !m_window)
	{
		gkWindowSystem* sys = m_private->windowsystem;
		gkUserDefs& defs = getUserDefs();

		m_window = sys->createWindow(defs);
		if (!defs.resources.empty())
			loadResources(defs.resources);
	}
}





void gkEngine::finalize()
{
	if (!m_initialized) return;

#ifdef OGREKIT_OPENAL_SOUND
	gkSoundManager::getSingleton().stopAllSounds();
#endif	

	gkResourceManager* tmgr;

#ifdef OGREKIT_USE_NNODE
	tmgr = gkNodeManager::getSingletonPtr();
	tmgr->destroyAll();
#endif

	tmgr = gkSceneManager::getSingletonPtr();
	tmgr->destroyAll();


	tmgr = gkGroupManager::getSingletonPtr();
	tmgr->destroyAll();

	tmgr = gkGameObjectManager::getSingletonPtr();
	tmgr->destroyAll();

#ifdef OGREKIT_USE_NNODE
	delete gkNodeManager::getSingletonPtr();
#endif
	delete gkGroupManager::getSingletonPtr();
	delete gkGameObjectManager::getSingletonPtr();
	delete gkSceneManager::getSingletonPtr();
	delete gkTextManager::getSingletonPtr();
	delete gkLogicManager::getSingletonPtr();
	delete gkWindowSystem::getSingletonPtr();
	delete gkMessageManager::getSingletonPtr();
	delete gkMeshManager::getSingletonPtr();
	delete gkSkeletonManager::getSingletonPtr();
	delete gkParticleManager::getSingletonPtr();
//	delete gkAnimationManager::getSingletonPtr();


#ifdef OGREKIT_USE_LUA
	delete gkLuaManager::getSingletonPtr();
#endif

#ifdef OGREKIT_COMPILE_OGRE_SCRIPTS
	delete gkFontManager::getSingletonPtr();
#endif


#ifdef OGREKIT_OPENAL_SOUND
	delete gkSoundManager::getSingletonPtr();
#endif

	delete gkBlendLoader::getSingletonPtr();
	delete gkResourceGroupManager::getSingletonPtr();

	delete gkStats::getSingletonPtr();
	delete m_private->debugFps;
	delete m_private->debugPage;
	delete m_private->debug;
	delete m_root;
	delete m_private;

	m_root = 0;
	m_initialized = false;
}




gkUserDefs& gkEngine::getUserDefs(void)
{
	GK_ASSERT(m_defs);
	return *m_defs;
}



void gkEngine::requestExit(void)
{
	gkWindowSystem::getSingleton().exit(true);
}



gkBlendFile* gkEngine::loadBlendFile(const gkString& blend, int options, const gkString& group)
{
	// This function is not really needed any more.
	// just use gkBlendLoader::getSingleton()
	return gkBlendLoader::getSingleton().loadFile(blend, options, "", group);
}



void gkEngine::loadResources(const gkString& name)
{
	if (name.empty()) return;

	try
	{
		ConfigFile fp;
		fp.load(name);

		ResourceGroupManager* resourceManager = ResourceGroupManager::getSingletonPtr();
		ConfigFile::SectionIterator cit = fp.getSectionIterator();

		while (cit.hasMoreElements())
		{
			gkString name = cit.peekNextKey();
			ConfigFile::SettingsMultiMap* ptr = cit.getNext();
			for (ConfigFile::SettingsMultiMap::iterator dit = ptr->begin(); dit != ptr->end(); ++dit)
				resourceManager->addResourceLocation(dit->second, dit->first, name);
		}
		ResourceGroupManager::getSingleton().initialiseAllResourceGroups();
	}
	catch (Exception& e)
	{
		gkLogMessage("Engine: Failed to load resource file!\n" << e.getDescription());
	}
}



void gkEngine::addDebugProperty(gkVariable* prop)
{
	if (m_defs->showDebugProps)
	{
		if (m_private->debugPage)
		{
			m_private->debugPage->addVariable(prop);
			m_private->debugPage->show(true);
		}
	}
}




void gkEngine::removeDebugProperty(gkVariable* prop)
{
	if (m_defs->showDebugProps)
	{
		if (m_private->debugPage)
			m_private->debugPage->removeVariable(prop);
	}
}



gkScalar gkEngine::getStepRate(void)
{
	return gkScalar(1.0) / ENGINE_TICKS_PER_SECOND;
}



gkScalar gkEngine::getTickRate(void)
{
	return ENGINE_TICKS_PER_SECOND;
}




bool gkEngine::hasActiveScene(void)
{
	GK_ASSERT(m_private);
	return m_private->curScene != 0;
}

void gkEngine::registerActiveScene(gkScene* scene)
{
	GK_ASSERT(m_private && scene);
	if (m_private->scenes.find(scene) == UT_NPOS)
	{
		m_private->scenes.push_back(scene);
		if (m_private->curScene == 0)
			m_private->curScene = scene;
	}
}

void gkEngine::unregisterActiveScene(gkScene* scene)
{
	GK_ASSERT(m_private && scene);
	m_private->scenes.erase(m_private->scenes.find(scene));
	if (m_private->curScene == scene)
		m_private->curScene = 0;
}



gkScene* gkEngine::getActiveScene(void)
{
	GK_ASSERT(m_private);
	return m_private->curScene;
}




void gkEngine::addListener(gkEngine::Listener* listener)
{
	m_listeners.push_back(listener);
}





void gkEngine::removeListener(gkEngine::Listener* listener)
{
	if (m_listeners.find(listener))
		m_listeners.erase(listener);
}


void gkEngine::run(void)
{
	if (!initializeStepLoop()) return;

	while (stepOneFrame());

	finalizeStepLoop();

}

bool gkEngine::initializeStepLoop(void)
{
	// init main game loop

	GK_ASSERT(m_private);
	if (m_private->scenes.empty())
	{
		gkLogMessage("Engine: Can't run with out a registered scene. exiting\n");
		return false;
	}

	gkWindowSystem* sys = m_private->windowsystem;
	if (!sys)
	{
		gkLogMessage("Engine: Can't run with out a window system. exiting\n");
		return false;
	}


	// setup timer
	m_root->clearEventTimes();
	m_root->getRenderSystem()->_initRenderTargets();
	m_root->addFrameListener(m_private);
	m_private->root = m_root;
	m_private->reset();

	m_running = true;

	return true;
}


bool gkEngine::stepOneFrame(void)
{
	m_private->curTime = m_private->timer->getTimeMilliseconds();

	gkWindowSystem* sys = m_private->windowsystem;
	sys->process();

	if (!m_root->renderOneFrame())
		return false;

	return !sys->exitRequest();
}


void gkEngine::finalizeStepLoop(void)
{
	m_root->removeFrameListener(m_private);
	m_running = false;
}

unsigned long gkEngine::getCurTime()
{
	return m_private->curTime;
}

bool gkEnginePrivate::frameStarted(const FrameEvent& evt)
{
	gkStats::getSingleton().startClock();

	return true;
}



bool gkEnginePrivate::frameRenderingQueued(const FrameEvent& evt)
{
	gkStats::getSingleton().stopRenderClock();

	if (!scenes.empty())
		tick();

	// restart the clock to mesure time for swapping buffer and updatind scenemanager LOD
	gkStats::getSingleton().startClock();

	return !scenes.empty();
}




bool gkEnginePrivate::frameEnded(const FrameEvent& evt)
{
	gkStats::getSingleton().stopBufSwapLodClock();
	gkStats::getSingleton().nextFrame();

	return true;
}




void gkEnginePrivate::beginTickImpl(void)
{
	GK_ASSERT(!scenes.empty());

	gkSceneArray::Iterator iter(scenes);
	while (iter.hasMoreElements())
		iter.getNext()->beginFrame();	
}




void gkEnginePrivate::endTickImpl(void)
{
	if (debugPage && debugPage->isShown())
		debugPage->draw();

	if (debugFps && debugFps->isShown())
		debugFps->draw();
}




void gkEnginePrivate::tickImpl(gkScalar dt)
{
	// Proccess one full game tick
	GK_ASSERT(windowsystem && !scenes.empty() && engine);


	// dispatch inputs
	windowsystem->dispatch();

	// update main scene
	gkSceneArray::Iterator siter1(scenes);
	while (siter1.hasMoreElements())
	{
		gkScene* scene = siter1.getNext();
		curScene = scene;
		scene->update(dt);
	}

	// update callbacks
	utArrayIterator<gkEngine::Listeners> iter(engine->m_listeners);
	while (iter.hasMoreElements())
		iter.getNext()->tick(dt);

	gkSceneArray::Iterator siter2(scenes);
	while (siter2.hasMoreElements())
		siter2.getNext()->applyConstraints();


	gkGameObjectManager::getSingleton().postProcessQueue();
	gkSceneManager::getSingleton().postProcessQueue();

}




UT_IMPLEMENT_SINGLETON(gkEngine);