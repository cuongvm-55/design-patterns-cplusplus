//
//  WindowMenu.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/13/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef WindowMenu_h
#define WindowMenu_h

#include <iostream>

class WindowMenu : public Widget
{
public:
    virtual void draw()
    {
        std::cout << "WindowMenu draw\n";
    }
};

#endif /* WindowMenu_h */
