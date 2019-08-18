//
//  ConcreteComponent.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/16/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef ConcreteComponent_h
#define ConcreteComponent_h

#include "Component.h"
#include <iostream>
class ConcreteComponent : public Component
{
public:
    ConcreteComponent(){}
    virtual ~ConcreteComponent(){}
    virtual void doOperation()
    {
        std::cout << "gift|";
    }
    
    
};
#endif /* ConcreteComponent_h */
