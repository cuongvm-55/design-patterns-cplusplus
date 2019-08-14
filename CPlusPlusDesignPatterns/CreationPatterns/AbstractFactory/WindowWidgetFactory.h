//
//  WindowWidgetFactory.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/13/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef WindowWidgetFactory_h
#define WindowWidgetFactory_h

#include "WidgetFactory.h"
#include "WindowButton.h"
#include "WindowMenu.h"
class WindowWidgetFactory : public WidgetFactory
{
public:
    virtual Widget* createButton()
    {
        return new WindowButton();
    }
    virtual Widget* createMenu()
    {
        return new WindowMenu();
    }
};

#endif /* WindowWidgetFactory_h */
