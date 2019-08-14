//
//  HenryStooge.hpp
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/13/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef HenryStooge_hpp
#define HenryStooge_hpp

#include <stdio.h>
#include "Stooge.h"

class HenryStooge : public Stooge
{
public:
    virtual void slapSticks();
};

#endif /* HenryStooge_hpp */
