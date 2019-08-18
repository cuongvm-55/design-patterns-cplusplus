//
//  FlyWeightFactory.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/18/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef FlyWeightFactory_h
#define FlyWeightFactory_h

#include <map>
#include <mutex>
#include "FlyWeight.h"

enum FlyWeightType
{
    FWT_BIRD,
    FWT_CAT
};

// Factory of flyweight objects
// Client mus call factory to get the object to ensure the object is shared (instead of create new that can cause memory bump)
class FlyWeightFactory
{
public:
    static FlyWeightFactory* getInstance();
    FlyWeight* getFlyWeight(FlyWeightType type);
    
private:
    FlyWeightFactory();
    FlyWeightFactory(const FlyWeightFactory& other);
    FlyWeightFactory& operator=(const FlyWeightFactory& other);
    
private:
    static FlyWeightFactory* m_instance;
    static std::mutex m_mutex;
    
    std::map<FlyWeightType, FlyWeight*> m_flyweights;
};

#endif /* FlyWeightFactory_h */
