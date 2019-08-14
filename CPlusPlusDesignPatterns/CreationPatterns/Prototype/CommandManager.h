//
//  CommandManager.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/14/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef CommandManager_h
#define CommandManager_h

#include "DomeCamCommand.h"
#include "SurveilanceCamCommand.h"
#include <map>

enum CommandType
{
    DOME_COMMAND,
    SURVEILANCE_COMMAND
};

class CommandManager
{
public:
    
    static ICamCommand* createCommand(CommandType type)
    {
        if (m_commandDict.find(type) == m_commandDict.end())
        {
            // not found
            return nullptr;
        }
        else
        {
            // found
            return m_commandDict.at(type)->clone();
        }
    }
    
private:
    static const std::map<CommandType, ICamCommand*> m_commandDict;
};

#endif /* CommandManager_h */
