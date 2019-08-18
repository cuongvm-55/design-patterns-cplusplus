//
//  FlyWeightFactory.cpp
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/18/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#include <stdio.h>
#include "FlyWeightFactory.h"
#include "ConcreteFlyWeight.h"

FlyWeightFactory* FlyWeightFactory::m_instance = nullptr;
std::mutex FlyWeightFactory::m_mutex;

FlyWeightFactory::FlyWeightFactory()
{
    m_flyweights.insert(std::pair<FlyWeightType,FlyWeight*>(FlyWeightType::FWT_BIRD, new ConcreteFlyWeight(new IntrinsicState("bird of paradise", 4))));
    m_flyweights.insert(std::pair<FlyWeightType,FlyWeight*>(FlyWeightType::FWT_CAT, new ConcreteFlyWeight(new IntrinsicState("Tom", 10))));
}
FlyWeightFactory* FlyWeightFactory::getInstance()
{
    if (m_instance == nullptr)
    {
        m_mutex.lock();
        if (m_instance == nullptr)
        {
            m_instance = new FlyWeightFactory();
        }
        m_mutex.unlock();
    }
    return m_instance;
}

FlyWeight* FlyWeightFactory::getFlyWeight(FlyWeightType type)
{
    FlyWeight* fw = nullptr;
    switch (type) {
        case FlyWeightType::FWT_BIRD:
        case FlyWeightType::FWT_CAT:
            fw = m_flyweights.at(type);
            break;
        default:
            std::cout << "flyweight type not support, type: " << type;
            break;
    }
    
    return fw;
}

