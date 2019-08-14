//
//  TestAfter.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/13/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef TestAfter_h
#define TestAfter_h

#include "WidgetFactory.h"
class TestAfter
{
public:
    TestAfter(WidgetFactory* widgetFactory)
    {
        m_widgetFactory = widgetFactory;
    }
    ~TestAfter()
    {
        m_widgetFactory = nullptr;
    }
    void draw()
    {
        Widget* menu = m_widgetFactory->createMenu();
        Widget* button = m_widgetFactory->createButton();
        menu->draw();
        button->draw();
    }
    
private:
    WidgetFactory* m_widgetFactory;
};

#endif /* TestAfter_h */
