//
//  WindowButton.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/13/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef WindowButton_h
#define WindowButton_h

#include <iostream>

class WindowButton : public Widget
{
public:
    virtual void draw()
    {
        std::cout << "WindowButton draw\n";
    }
};

#endif /* WindowButton_h */
