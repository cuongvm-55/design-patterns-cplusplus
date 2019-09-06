//
//  Television.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 9/3/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef Television_h
#define Television_h

#include "SwitchableDevice.h"
#include <iostream>

// Concrete command receiver
class Television : public SwitchableDevice
{
public:
    virtual void turnOn()
    {
        std::cout << "Television turned on\n";
    }
    virtual void turnOff()
    {
        std::cout << "Television turned off\n";
    }
};

#endif /* Television_h */
