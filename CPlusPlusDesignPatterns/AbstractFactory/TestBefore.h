//
//  TestBefore.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/13/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef TestBefore_h
#define TestBefore_h

#include "LinuxButton.h"
#include "LinuxMenu.h"
#include "WindowButton.h"
#include "WindowMenu.h"

#define LINUX

class TestBefore
{
public:
    void draw()
    {
#ifdef LINUX
        LinuxMenu lm;
        LinuxButton lb;
        lm.draw();
        lb.draw();
#else
        WindowMenu wm;
        WindowButton wb;
        wm.draw();
        wb.draw();
#endif
    }
};
#endif /* TestBefore_h */
