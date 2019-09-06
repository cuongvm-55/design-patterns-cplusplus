//
//  TurnOnCommand.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 9/3/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef TurnOnCommand_h
#define TurnOnCommand_h

#include "ICommand.h"
#include "SwitchableDevice.h"

class TurnOnCommand : public ICommand
{
public:
    TurnOnCommand(SwitchableDevice* device)
    : m_device(device)
    {
    }
    virtual void execute()
    {
        m_device->turnOn();
    }
    
private:
    SwitchableDevice* m_device;
};

#endif /* TurnOnCommand_h */
