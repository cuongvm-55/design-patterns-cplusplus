//
//  LinuxButton.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/13/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef LinuxButton_h
#define LinuxButton_h

#include "Widget.h"
#include <iostream>

class LinuxButton : public Widget
{
public:
    virtual void draw()
    {
        std::cout << "LinuxButton draw\n";
    }
};


#endif /* LinuxButton_h */
