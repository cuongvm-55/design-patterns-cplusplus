//
//  DecoratorAddFlower.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/16/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef DecoratorAddFlower_h
#define DecoratorAddFlower_h

#include "Decorator.h"
#include <iostream>
// Concrete decorator extends functionality of Component
class DecoratorAddFlower : public Decorator
{
public:
    DecoratorAddFlower(Component* inner, std::string flower)
    : Decorator(inner), m_flower(flower)
    {
    }
    virtual ~DecoratorAddFlower(){}
    
    virtual void doOperation()
    {
        Decorator::doOperation();
        addFlower();
    }
    
    void addFlower()
    {
        std::cout << m_flower << "|";
    }
    
private:
    std::string m_flower;
};

#endif /* DecoratorAddFlower_h */
