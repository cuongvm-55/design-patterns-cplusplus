//
//  ObjectPool.cpp
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/14/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#include <stdio.h>
#include "ObjectPool.h"

ObjectPool* ObjectPool::m_instance = nullptr;
std::mutex ObjectPool::m_singletonMutex;

ObjectPool* ObjectPool::getInstance()
{
    if (m_instance == nullptr)
    {
        m_singletonMutex.lock();
        if (m_instance == nullptr)
        {
            m_instance = new ObjectPool();
        }
        m_singletonMutex.unlock();
    }
    return m_instance;
}

// Acquire resource from the pool

Resource* ObjectPool::acquireResource()
{
    if (m_resources.size() == 0)
    {
        // resource are running out
        // if the number of created resource is less than the capacity then create new resource
        // else force the caller to block waiting for resource to be released
        if (m_resCount < m_resCapacity)
        {
            Resource* res = new Resource();
            m_resCount++;
            return res;
        }
        // block the caller until any resource returned by the resource holder
        m_waitResourceMutex.lock();
    }
    // resource available at this point
    Resource* resource = m_resources.front();
    m_accessResourceMutex.lock();
    m_resources.pop_front();
    m_accessResourceMutex.unlock();
    return resource;
}

// set maximal value of allowed resource
void ObjectPool::setResourceCapacity(size_t capacity)
{
    if (m_resCapacity < capacity)
    {
        m_resCapacity = capacity;
        return;
    }
    
    // if the pool is shrink
    // truncate the resources list
    if (m_resources.size() >= capacity)
    {
        size_t trancateCount = m_resources.size() - capacity;
        for(int i = 0; i < trancateCount; i++)
        {
            m_accessResourceMutex.lock();
            Resource* resource = m_resources.front();
            m_resources.pop_front();
            delete resource;
            m_resCount--;
            m_accessResourceMutex.unlock();
        }
    }
    m_resCapacity = capacity;
}

// release resource back to the pool
void ObjectPool::releaseResource(Resource* resource)
{
    if (m_resources.size() < m_resCapacity)
    {
        // re-add the resource to the pool
        m_accessResourceMutex.lock();
        resource->reset();
        m_resources.push_back(resource);
        m_accessResourceMutex.unlock();
    }
    else
    {
        // the resource pool has been shrank during the resource was using
        delete resource;
        m_resCount--;
    }
    
    // notify if some thread is waiting for the resource
    if (m_waitResourceMutex.try_lock())
    {
        // nobody has lock
        m_waitResourceMutex.unlock();
        return;
    }
    
    // other has lock the mutex, unlock it
    m_waitResourceMutex.unlock();
}
