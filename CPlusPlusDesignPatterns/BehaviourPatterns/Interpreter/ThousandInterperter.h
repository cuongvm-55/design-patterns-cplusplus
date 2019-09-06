//
//  ThousandInterperter.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 9/3/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef ThousandInterperter_h
#define ThousandInterperter_h

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
        
        int numberGroup = context->m_currentNumber/(m_currentGroup*1000) % ((m_totalGroup-m_currentGroup - 1)*1000);
        int tenNumber = (numberGroup%100)/10;
        if (tenNumber == 0 && tenNumber == 1)
        {
            return;
        }
        
    }
};

#endif /* ThousandInterperter_h */
