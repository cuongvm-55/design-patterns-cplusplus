//
//  WidgetFactory.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/13/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef WidgetFactory_h
#define WidgetFactory_h

#include "Widget.h"
class WidgetFactory
{
public:
    virtual Widget* createButton() = 0;
    virtual Widget* createMenu() = 0;
};


#endif /* WidgetFactory_h */
