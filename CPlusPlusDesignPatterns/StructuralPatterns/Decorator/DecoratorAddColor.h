//
//  DecoratorAddColor.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/16/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef DecoratorAddColor_h
#define DecoratorAddColor_h

#include "Decorator.h"
#include <iostream>
// Concrete decorator extends functionality of Component
class DecoratorAddColor : public Decorator
{
public:
    DecoratorAddColor(Component* inner, std::string color)
    : Decorator(inner), m_color(color)
    {
    }
    virtual ~DecoratorAddColor(){}
    
    virtual void doOperation()
    {
        Decorator::doOperation();
        addColor();
    }
    
    void addColor()
    {
        std::cout <<m_color << "|";
    }
    
private:
    std::string m_color;
};

#endif /* DecoratorAddColor_h */
