//
//  SwitchableDevice.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 9/3/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef SwitchableDevice_h
#define SwitchableDevice_h

// Abstract command receiver
class SwitchableDevice
{
public:
    virtual void turnOn() = 0;
    virtual void turnOff() = 0;
};
#endif /* SwitchableDevice_h */
