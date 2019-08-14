//
//  ICamCommand.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/14/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef ICamCommand_h
#define ICamCommand_h

class ICamCommand
{
public:
    virtual ~ICamCommand(){}
    virtual ICamCommand* clone() const = 0;
    virtual void execute() const = 0;
};

#endif /* ICamCommand_h */
