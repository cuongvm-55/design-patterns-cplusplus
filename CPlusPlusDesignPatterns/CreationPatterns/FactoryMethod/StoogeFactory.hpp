//
//  StoogeFactory.hpp
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/13/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef StoogeFactory_hpp
#define StoogeFactory_hpp

#include <stdio.h>
#include "Stooge.h"

class StoogeFactory
{
public:
    static StoogeFactory& GetInstance();
    ~StoogeFactory();
    
    Stooge* createStooge(const std::string& type);
    
private:
    StoogeFactory();
    StoogeFactory(const StoogeFactory&);
    StoogeFactory& operator=(const StoogeFactory&);
    
};

#endif /* StoogeFactory_hpp */
