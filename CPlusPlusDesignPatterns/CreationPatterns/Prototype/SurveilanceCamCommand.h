//
//  SurveilanceCamCommand.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/14/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef SurveilanceCamCommand_h
#define SurveilanceCamCommand_h

#include <stdio.h>
#include <iostream>
#include "ICamCommand.h"
class SurveilanceCamCommand : public ICamCommand
{
public:
    virtual ICamCommand* clone() const
    {
        return new SurveilanceCamCommand();
    }
    
    virtual void execute() const
    {
        std::cout << "Surveilance cam command executed!\n";
    }
};

#endif /* SurveilanceCamCommand_h */
