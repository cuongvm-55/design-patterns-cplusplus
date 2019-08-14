//
//  ObjectPool.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/14/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef ObjectPool_h
#define ObjectPool_h

#include "Resource.h"
#include <iostream>
#include <list>
#include <mutex>

#define DEFAULT_POOL_CAPACITY 5

// Abstract the object pool which manage list of reusable resources
class ObjectPool
{
public:
    static ObjectPool* getInstance();
    
    virtual ~ObjectPool()
    {
        for(int i=0;i<m_resources.size(); i++)
        {
            Resource* resource = m_resources.front();
            m_resources.pop_front();
            delete resource;
        }
        m_resources.clear();
    }
    Resource* acquireResource();
    void setResourceCapacity(size_t capacity);
    void releaseResource(Resource* resource);
    
private:
    ObjectPool()
    {
        m_resCapacity = DEFAULT_POOL_CAPACITY;
        m_resCount = 0;
    }
    
    ObjectPool(const ObjectPool& other);
    ObjectPool& operator=(const ObjectPool& other);
    
private:
    static std::mutex m_singletonMutex;
    static ObjectPool* m_instance;
    std::list<Resource*> m_resources; // list of available resources in the pool, note that resource will be removed from this list when client acquires resource and resource will be re-add to this list when client release the holding resource.
    size_t m_resCapacity;  // allowed number of resources
    size_t m_resCount;     // current created resources
    std::mutex m_waitResourceMutex; // mutex for resource waiting in case the pool has no available resource
    std::mutex m_accessResourceMutex; // mutex for manipulating the resource list
};

#endif /* ObjectPool_h */
