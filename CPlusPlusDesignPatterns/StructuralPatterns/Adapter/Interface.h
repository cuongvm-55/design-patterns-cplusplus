//
//  Interface.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/15/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef Interface_h
#define Interface_h

#include "Product.h"
// Abstract the interface that Client needed
class Interface
{
public:
    virtual Product* request() const = 0;
};

#endif /* Interface_h */
