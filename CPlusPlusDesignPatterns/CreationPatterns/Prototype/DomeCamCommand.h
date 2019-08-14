//
//  DomeCamCommand.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/14/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef DomeCamCommand_h
#define DomeCamCommand_h

#include <stdio.h>
#include <iostream>
#include "ICamCommand.h"
class DomeCamCommand : public ICamCommand
{
public:
    virtual ICamCommand* clone() const
    {
        return new DomeCamCommand();
    }
    
    virtual void execute() const
    {
        std::cout << "Dome cam command executed!\n";
    }
};

#endif /* DomeCamCommand_h */
