//
//  TurnOffCommand.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 9/3/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef TurnOffCommand_h
#define TurnOffCommand_h

#include "ICommand.h"
#include "SwitchableDevice.h"

// Concrete command
class TurnOffCommand : public ICommand
{
public:
    TurnOffCommand(SwitchableDevice* device)
    : m_device(device)
    {
    }
    virtual void execute()
    {
        m_device->turnOff();
    }
    
private:
    SwitchableDevice* m_device;
};

#endif /* TurnOffCommand_h */
