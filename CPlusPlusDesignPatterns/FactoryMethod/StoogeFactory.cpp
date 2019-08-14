//
//  StoogeFactory.cpp
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/13/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#include "StoogeFactory.hpp"
#include "LarryStooge.hpp"
#include "HenryStooge.hpp"

StoogeFactory::StoogeFactory()
{
    
}

StoogeFactory::~StoogeFactory()
{
    
}

StoogeFactory& StoogeFactory::GetInstance()
{
    static StoogeFactory stooge;
    return stooge;
}

Stooge* StoogeFactory::createStooge(const std::string &type)
{
    if (type == "larry")
    {
        return new LarryStooge();
    }
    
    if (type == "henry")
    {
        return new HenryStooge();
    }
    
    std::cout << "stooge type not handled: " << type << std::endl;
    return nullptr;
}
