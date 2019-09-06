//
//  Switch.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 9/3/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef Switch_h
#define Switch_h

#include "TurnOnCommand.h"
#include "TurnOffCommand.h"
#include "SwitchableDevice.h"
#include <list>

// Command invoker
class Switch
{
public:
    Switch(SwitchableDevice* device)
    {
        m_turnOnCommand = new TurnOnCommand(device);
        m_turnOffCommand = new TurnOffCommand(device);
    }
    
    void switchOn()
    {
        m_turnOnCommand->execute();
    }
    
    void switchOff()
    {
        m_turnOffCommand->execute();
    }
    
private:
    ICommand* m_turnOnCommand;
    ICommand* m_turnOffCommand;
};

#endif /* Switch_h */
