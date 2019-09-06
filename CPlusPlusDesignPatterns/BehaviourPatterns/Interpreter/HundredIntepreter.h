//
//  HundredIntepreter.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 9/3/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef HundredIntepreter_h
#define HundredIntepreter_h

#include <iostream>
#include "AbstractInterpreter.h"

class HundredInterpreter: public AbstractInterpreter
{
public:
    virtual void interpret(InterpreterContext* context)
    {
        if (context->m_isDone)
        {
            return;
        }
        
        int numberGroup = context->m_currentNumber/(m_currentGroup*1000);
        int tenNumber = (numberGroup%100)/10;
        if (tenNumber == 0 && tenNumber == 1)
        {
            return;
        }
        
        std::string text = "";
        switch (tenNumber)
        {
            case 2:
                text += " twen";
                break;
            case 3:
                text += " third";
                break;
            case 5:
                text += " fifth";
                break;
            default:
                text += getOneText(number);
                break;
        }
        text+= "ty";
        
        int digitNumber = (numberGroup%100)%10;
        if (digitNumber != 0)
        {
            text+= " " + getOneText(digitNumber);
        }
        
        context->m_resultText += text;
    }
};
#endif /* HundredIntepreter_h */
