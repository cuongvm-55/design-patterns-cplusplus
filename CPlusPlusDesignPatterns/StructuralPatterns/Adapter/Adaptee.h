//
//  Adaptee.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/15/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef Adaptee_h
#define Adaptee_h

#include <stdio.h>
#include <iostream>
#include "LegacyProduct.h"

// "off-the-shelf" library that need to be adapted
class Adaptee
{
public:
    LegacyProduct* legacyRequest() const
    {
        std::cout << "legacy request is called\n";
        return new LegacyProduct("vendor-name", "235748");
    }
};

#endif /* Adaptee_h */
