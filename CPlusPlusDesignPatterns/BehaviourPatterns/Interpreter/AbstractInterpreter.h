//
//  AbstractInterpreter.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 9/3/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef AbstractInterpreter_h
#define AbstractInterpreter_h

#include "InterpreterContext.h"
#include <iostream>
class AbstractInterpreter
{
public:
    virtual void interpret(InterpreterContext* context) = 0;
    
    std::string getOneText(int number)
    {
        switch(number)
        {
            case 1:
                return "one";
            case 2:
                return "two";
            case 3:
                return "three";
            case 4:
                return "four";
            case 5:
                return "five";
            case 6:
                return "six";
            case 7:
                return "seven";
            case 8:
                return "eight";
            case 9:
                return "nine";
            default:
                break;
        }
        
        return "";
    }
};

#endif /* AbstractInterpreter_h */
