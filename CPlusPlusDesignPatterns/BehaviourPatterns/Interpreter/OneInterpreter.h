//
//  OneInterpreter.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 9/3/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef OneInterpreter_h
#define OneInterpreter_h

#include "AbstractInterpreter.h"
class OneInterpreter: public AbstractInterpreter
{
public:
    virtual void interpret(InterpreterContext* context)
    {
        if (context->m_isDone)
        {
            return;
        }
        
        int numberGroup = context->m_currentNumber/(m_currentGroup*1000);
        int digitNumber = numberGroup%10;
        if (digitNumber == 0)
        {
            return;
        }
        
        int tenNumber = (numberGroup/10)%10;
        if (tenNumber == 0)
        {
            context->m_resultText += "and " + getOneText(oneNumber);
        }
    }
};

#endif /* OneInterpreter_h */
