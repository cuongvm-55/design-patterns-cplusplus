//
//  LarryStooge.hpp
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/13/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef LarryStooge_hpp
#define LarryStooge_hpp

#include <stdio.h>
#include "Stooge.h"

class LarryStooge : public Stooge
{
public:
    virtual void slapSticks();
};

#endif /* LarryStooge_hpp */
