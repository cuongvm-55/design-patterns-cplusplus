//
//  LinuxMenu.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/13/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef LinuxMenu_h
#define LinuxMenu_h

#include <iostream>

class LinuxMenu : public Widget
{
public:
    virtual void draw()
    {
        std::cout << "LinuxMenu draw\n";
    }
};

#endif /* LinuxMenu_h */
