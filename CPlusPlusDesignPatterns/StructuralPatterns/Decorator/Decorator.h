//
//  Decorator.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/16/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef Decorator_h
#define Decorator_h

#include "Component.h"

// Abstract wraper
class Decorator : public Component
{
public:
    Decorator(Component* inner)
    : m_inner(inner)
    {}
    virtual ~Decorator(){}
    
    virtual void doOperation()
    {
        m_inner->doOperation();
    }
    
private:
    Component* m_inner;
};
#endif /* Decorator_h */
