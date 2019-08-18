//
//  ConcreteFlyWeight.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/18/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef ConcreteFlyWeight_h
#define ConcreteFlyWeight_h

#include "FlyWeight.h"
#include "IntrinsicState.h"
#include <iostream>
// Implementation of flyweight
class ConcreteFlyWeight : public FlyWeight
{
public:
    ConcreteFlyWeight(IntrinsicState* inState)
    : m_inState(inState)
    {}
    virtual ~ConcreteFlyWeight(){}
    virtual void doOperation(ExtrinsicState* exState)
    {
        std::cout << "doOperation with extrinsic state: \n";
        exState->display();
    }
    
private:
    IntrinsicState* m_inState;
};

#endif /* ConcreteFlyWeight_h */
