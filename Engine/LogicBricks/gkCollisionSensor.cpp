/*
-------------------------------------------------------------------------------
    This file is part of OgreKit.
    http://gamekit.googlecode.com/

    Copyright (c) 2006-2010 Charlie C.

    Contributor(s): Nestor Silveira.
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
#include "gkLogicManager.h"
#include "gkCollisionSensor.h"
#include "gkDynamicsWorld.h"
#include "gkGameObject.h"
#include "gkRigidBody.h"
#include "gkScene.h"
#include "gkEngine.h"
#include "btBulletDynamicsCommon.h"


// ----------------------------------------------------------------------------
gkCollisionDispatch::gkCollisionDispatch()
{
}


// ----------------------------------------------------------------------------
void gkCollisionDispatch::dispatch(void)
{
    // TODO need to sort. 
    doDispatch(m_sensors);
}


// ----------------------------------------------------------------------------
gkCollisionSensor::gkCollisionSensor(gkGameObject *object, gkLogicLink *link, const gkString &name)
:       gkLogicSensor(object, link, name), m_material(""), m_prop("")
{
    m_dispatchType = DIS_COLLISION;
    connect();
}


// ----------------------------------------------------------------------------
gkLogicBrick* gkCollisionSensor::clone(gkLogicLink *link, gkGameObject *dest)
{
    gkCollisionSensor *sens = new gkCollisionSensor(*this);
    sens->cloneImpl(link, dest);
    return sens;
}

// ----------------------------------------------------------------------------
bool gkCollisionSensor::query(void)
{
    gkObject *object = m_object->getAttachedObject();
    if (!object) 
        return false;

    if (object->getContacts().empty())
        return false;



    gkObject::ContactArray &arr = object->getContacts();


    UTsize nr=arr.size(), i;

    // Global. test only for actors 

    for (i=0; i<nr; ++i)
    {
        gkObject::ContactInfo &inf = arr[i];

        gkGameObject *obj = inf.collider->getObject();
        //if (obj->getProperties().objectStateFlags & GK_OB_ACTOR)
        {
            // any GK_OB_ACTOR will do 
            if (m_prop.empty() && m_material.empty())
                return true;
        }

        if (!m_prop.empty())
        {
            if (obj->hasVariable(m_prop) /*&& obj->getProperties().objectStateFlags & GK_OB_ACTOR*/)
                return true;
        }
        else if (!m_material.empty())
        {
            if (inf.collider->getSensorMaterial() == m_material)
                return true;
        }
    }
    return false;
}
