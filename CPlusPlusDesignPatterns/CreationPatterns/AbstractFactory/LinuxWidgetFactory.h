//
//  LinuxWidgetFactory.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/13/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef LinuxWidgetFactory_h
#define LinuxWidgetFactory_h

#include "WidgetFactory.h"
#include "LinuxButton.h"
#include "LinuxMenu.h"
class LinuxWidgetFactory : public WidgetFactory
{
public:
    virtual Widget* createButton()
    {
        return new LinuxButton();
    }
    virtual Widget* createMenu()
    {
        return new LinuxMenu();
    }
};

#endif /* LinuxWidgetFactory_h */
