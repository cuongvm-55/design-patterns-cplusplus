//
//  Singleton.hpp
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/13/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef Singleton_hpp
#define Singleton_hpp

#include <stdio.h>
#include <iostream>
#include <mutex>

class Singleton
{
public:
    virtual ~Singleton();
    // expose only Instance() function to provide the only entry to the unique class's instance
    static Singleton* Instance();
    static Singleton& GetInstance();
    
    // functions
    void print()
    {
        std::cout << "Hello from Singleton class" << std::endl;
    }

private:
    // forbidden constructor, copy constructor and assignment
    Singleton();
    Singleton(const Singleton& other);
    Singleton& operator=(const Singleton& other);

private:
    static Singleton* m_instance;
    static std::mutex m_mutex;
};

#endif /* Singleton_hpp */
