//
//  TenInterpreter.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 9/3/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef TenInterpreter_h
#define TenInterpreter_h

#include "AbstractInterpreter.h"
class TenInterpreter: public AbstractInterpreter
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
        if (tenNumber != 1)
        {
            return;
        }
        
        int number = numberGroup%100;
        std::string text = "";
        switch (number)
        {
            case 10:
                text = " ten";
                break;
            case 11:
                text = " eleven";
                break;
            case 12:
                text = " twelve";
                break;
            case 13:
                text = " thirdteen";
                break;
            case 15:
                text = " fifthteen";
                break;
            case 14:
            case 16:
            case 17:
            case 18:
            case 19:
                text = " " + getOneText(number%10) + "teen";
                break;
            default:
                break;
        }
        context->m_resultText += text;
    }
};
#endif /* TenInterpreter_h */
