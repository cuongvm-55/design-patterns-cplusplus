//
//  Component.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/16/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef Component_h
#define Component_h

// Wrapee
class Component
{
public:
    virtual ~Component(){}
    virtual void doOperation() = 0;
};

#endif /* Component_h */
