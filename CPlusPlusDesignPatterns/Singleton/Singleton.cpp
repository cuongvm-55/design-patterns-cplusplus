//
//  Singleton.cpp
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/13/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#include "Singleton.hpp"

Singleton* Singleton::m_instance = nullptr;
std::mutex Singleton::m_mutex;
Singleton::Singleton()
{
}

Singleton::~Singleton()
{
}

Singleton* Singleton::Instance()
{
    // double-check with mutex lock to ensure unique instance of singleton is created
    if (m_instance == nullptr)
    {
        m_mutex.lock();
        if (m_instance == nullptr)
        {
            m_instance = new Singleton();
        }
        m_mutex.unlock();
    }
    
    return m_instance;
}

Singleton& Singleton::GetInstance()
{
    static Singleton instance;
    return instance;
}
