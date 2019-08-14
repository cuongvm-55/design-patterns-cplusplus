//
//  CommandManager.cpp
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/14/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#include <stdio.h>
#include "CommandManager.h"

const std::map<CommandType, ICamCommand*> CommandManager::m_commandDict =
{
    {DOME_COMMAND, new DomeCamCommand()},
    {SURVEILANCE_COMMAND, new SurveilanceCamCommand()}
};
