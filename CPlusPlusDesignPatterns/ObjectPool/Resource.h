//
//  Resource.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/14/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef Resource_h
#define Resource_h

#include <stdio.h>
#include <iostream>
// Abstract the resource to be placed in the pool
class Resource
{
public:
    Resource(){}
    Resource(std::string k, std::string v)
    : m_key(k), m_value(v)
    {
    }
    virtual ~Resource()
    {
        std::cout << "Resource is destructed.";
    }
    
    void reset()
    {
        m_key = "";
        m_value = "";
    }
public:
    std::string m_key;
    std::string m_value;
};

#endif /* Resource_h */
