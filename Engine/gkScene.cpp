/*
-------------------------------------------------------------------------------
    This file is part of OgreKit.
    http://gamekit.googlecode.com/

    Copyright (c) 2006-2010 Charlie C.

    Contributor(s): none yet.
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
#include "OgreSceneManager.h"
#include "OgreRenderWindow.h"
#include "OgreViewport.h"
#include "OgreStringConverter.h"

#include "gkWindowSystem.h"
#include "gkCamera.h"
#include "gkEntity.h"
#include "gkLight.h"
#include "gkSkeleton.h"
#include "gkGameObjectGroup.h"
#include "gkEngine.h"
#include "gkScene.h"
#include "gkLogicManager.h"
#include "gkNodeManager.h"
#include "gkLogger.h"
#include "gkDynamicsWorld.h"
#include "gkRigidBody.h"


using namespace Ogre;


gkScene::gkScene(const gkString& name, gkObject::Loader *loader)
:       gkObject(name, loader), m_manager(0), m_startCam(0),
        m_viewport(0), m_baseProps(), m_physicsWorld(0)
{
}

gkScene::~gkScene()
{
    gkGameObjectHashMapIterator it(m_objects);
    while (it.hasMoreElements()) {
        delete it.getNext().second;
    }
}

bool gkScene::hasObject(const gkHashedString& ob)
{
    return m_objects.find(ob) != GK_NPOS;
}


bool gkScene::hasObject(gkGameObject *ob)
{
    GK_ASSERT(ob);
    return m_objects.find(ob->getName()) != GK_NPOS;
}


gkGameObject* gkScene::getObject(const gkHashedString& name)
{
    size_t pos = m_objects.find(name);
    if (pos != GK_NPOS)
        return m_objects.at(pos);
    return 0;
}


gkGameObject* gkScene::createObject(const gkHashedString &name, gkObject::Loader  *loader)
{
    if (m_objects.find(name) != GK_NPOS) {
        gkPrintf("duplicate object '%s' found\n", name.str().c_str());
        return 0;
    }

    gkGameObject *ob = new gkGameObject(this, name.str(), GK_OBJECT, loader);
    m_objects.insert(name, ob);
    return ob;
}


gkLight* gkScene::createLight(const gkHashedString &name, gkObject::Loader *loader)
{
    if (m_objects.find(name) != GK_NPOS) {
        gkPrintf("duplicate object '%s' found\n", name.str().c_str());
        return 0;
    }

    gkLight *ob = new gkLight(this, name.str(), loader);
    m_objects.insert(name, ob);
    return ob;
}


gkCamera* gkScene::createCamera(const gkHashedString &name, gkObject::Loader *loader)
{
    if (m_objects.find(name) != GK_NPOS) {
        gkPrintf("duplicate object '%s' found\n", name.str().c_str());
        return 0;
    }

    gkHashedString nameHash = name;
    gkCamera *ob = new gkCamera(this, name.str(), loader);

    m_objects.insert(nameHash, ob);
    return ob;
}

gkEntity* gkScene::createEntity(const gkHashedString &name, gkObject::Loader *loader)
{
    if (m_objects.find(name) != GK_NPOS) {
        gkPrintf("duplicate object '%s' found\n", name.str().c_str());
        return 0;
    }

    gkEntity *ob = new gkEntity(this, name.str(), loader);
    m_objects.insert(name, ob);
    return ob;
}

gkSkeleton* gkScene::createSkeleton(const gkHashedString &name, gkObject::Loader *loader)
{
    if (m_objects.find(name) != GK_NPOS) {
        gkPrintf("duplicate object '%s' found\n", name.str().c_str());
        return 0;
    }

    gkSkeleton *ob = new gkSkeleton(this, name.str(), loader);
    m_objects.insert(name, ob);
    return ob;
}

gkDynamicsWorld* gkScene::createWorld(gkObject::Loader *manual)
{
    if (m_physicsWorld) return 0;

    m_physicsWorld = new gkDynamicsWorld(m_name, this, manual);
    return m_physicsWorld;
}


void gkScene::applyViewport(Viewport *vp)
{
    const gkVector2& size = gkWindowSystem::getSingleton().getMouse()->winsize;
    vp->setDimensions(0, 0, 1, 1);

    Camera *c = vp->getCamera();
    if (c != 0) c->setAspectRatio(size.x / size.y);
}

void gkScene::setMainCamera(gkCamera *cam)
{
    if (!m_startCam)
        return;

    m_startCam = cam;
    Camera* main = m_startCam->getCamera();

    GK_ASSERT(main);

    if (!m_viewport) {
        // create a new viewport
        RenderWindow *window = gkWindowSystem::getSingleton().getMainWindow();
        if (window)
            m_viewport = window->addViewport(main);
    } else
        m_viewport->setCamera(main);

    GK_ASSERT(m_viewport);
    applyViewport(m_viewport);
}





// Load this scene. For all created objects, call builder
// methods to extract & convert needed information
void gkScene::loadImpl(void)
{

    if (m_objects.empty()) {
        gkPrintf("no objects in scene '%s' to load\n", m_name.c_str());
        return;
    }


    // generic for now, but later scene properties will be used
    // to extract more detailed management information
    m_manager = Root::getSingleton().createSceneManager(ST_GENERIC, m_name);
    if (!m_baseProps.skyMat.empty())
        m_manager->setSkyBox(true, m_baseProps.skyMat, m_baseProps.skyDist);


    // load physics scene
    if (m_physicsWorld) m_physicsWorld->load();


    gkGameObjectHashMapIterator it(m_objects);
    while (it.hasMoreElements()) {
        gkGameObject* obptr = it.getNext().second;

        // Skip load of inactive layers
        if (!obptr->isLoaded() && obptr->isInActiveLayer()) {
            // If there is one camera in the scene use it.
            // The start camera may have not been specified.
            if (!m_startCam && obptr->getType() == GK_CAMERA)
                m_startCam = (gkCamera*)obptr;


            // call builder
            obptr->load();

			if(obptr->getProperties().isStatic)
			{
				m_Limits.merge(obptr->getAttachedBody()->getAabb());
			}

        }
    }


    if (!m_viewport) {

        // setMainCamera has not been called, try to call
        if (m_startCam)
            setMainCamera(m_startCam);
        else {
            m_startCam = createCamera(" -- No Camera -- ");
            m_startCam->getProperties().position = gkVector3(0, -5, 0);
            m_startCam->getProperties().orientation = gkEuler(90.f, 0.f, 0.f).toQuaternion();
            m_startCam->load();
            setMainCamera(m_startCam);
        }
    }


    GK_ASSERT(m_viewport);
    m_viewport->setBackgroundColour(m_baseProps.world_color);
    m_manager->setAmbientLight(m_baseProps.ambient);


    // notify main scene
    gkEngine::getSingleton().setActiveScene(this);
}


void gkScene::unloadImpl()
{
    if (m_objects.empty())
        return;

    gkGameObjectHashMapIterator it(m_objects);
    while (it.hasMoreElements()) {
        gkGameObject* obptr = it.getNext().second;

        if (obptr->isLoaded())
            obptr->unload();
    }

    if (m_physicsWorld) {
        m_physicsWorld->unload();
        delete m_physicsWorld;
        m_physicsWorld = 0;
    }

	m_Limits = AxisAlignedBox::BOX_NULL;

    // clear per scene 
    gkLogicManager::getSingleton().clear();


    // clear ogre scene manager
    if (m_manager)
        Root::getSingleton().destroySceneManager(m_manager);
    m_manager = 0;

    // finalize vp
    if (m_viewport) {
        RenderWindow *window = gkWindowSystem::getSingleton().getMainWindow();
        if (window) {
            window->removeViewport(0);
            m_viewport = 0;
        }
    }

    gkEngine::getSingleton().setActiveScene(0);
}


void gkScene::synchronizeMotion(gkScalar blend)
{

    if (!m_transformObjects.empty()) {
        gkGameObjectArray::Pointer buffer = m_transformObjects.ptr();
        size_t size = m_transformObjects.size();
        size_t i = 0;
        while (i < size)
            (buffer[i++])->blendTransform(blend);


        // prevent constant reallocation
        static int sync_nr = 0;
        ++sync_nr;
        if (sync_nr > 1000) {
            sync_nr = 0;
            m_transformObjects.clear();
        } else
            m_transformObjects.resize(0);
    }

}


void gkScene::update(gkScalar tickRate)
{
    if (!isLoaded())
        return;

    // update logic bricks
    gkLogicManager::getSingleton().update(tickRate);

    // update node trees (may be clashes with bricks)
    gkNodeManager::getSingleton().update(tickRate);

    // update simulation
    if (m_physicsWorld) m_physicsWorld->step(tickRate);

}
