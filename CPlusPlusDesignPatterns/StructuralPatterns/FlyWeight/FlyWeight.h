//
//  FlyWeight.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/18/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef FlyWeight_h
#define FlyWeight_h

#include "ExtrinsicState.h"

// Abstract flyweight
class FlyWeight
{
public:
    virtual ~FlyWeight(){}
    virtual void doOperation(ExtrinsicState* exState) = 0;
};

#endif /* FlyWeight_h */
