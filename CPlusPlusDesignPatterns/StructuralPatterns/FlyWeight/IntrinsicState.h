//
//  IntrinsictState.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/18/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef IntrinsicState_h
#define IntrinsicState_h

#include <iostream>
// Intrinsic state of object that can be shared between clients
class IntrinsicState
{
public:
    IntrinsicState(std::string name, int age)
    : m_name(name), m_age(age)
    {}
    
    virtual ~IntrinsicState(){}
    
private:
    int m_age;
    std::string m_name;
};

#endif /* IntrinsicState_h */
