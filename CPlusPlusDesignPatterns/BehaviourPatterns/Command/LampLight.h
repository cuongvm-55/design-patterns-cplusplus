//
//  LampLight.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 9/3/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef LampLight_h
#define LampLight_h

#include <iostream>
#include "SwitchableDevice.h"

// Concrete command receiver
class LampLight : public SwitchableDevice
{
public:
    virtual void turnOn()
    {
        std::cout << "Light turned on\n";
    }
    virtual void turnOff()
    {
        std::cout << "Light turned off\n";
    }
};

#endif /* LampLight_h */
