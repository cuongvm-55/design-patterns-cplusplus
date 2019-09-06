//
//  PostGroupInterpreter.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 9/3/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef PostGroupInterpreter_h
#define PostGroupInterpreter_h

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
        
        std::string text = "";
        if (context->m_currentGroup%3 == 0)
        {
            text+= " thousand";
        }
        else if (context->m_currentGroup%6 == 0)
        {
            text+= " million";
        }
        else if (context->m_currentGroup%9 == 0)
        {
            text+= " billion";
        }
        
        context->m_resultText += text;
    }
};
#endif /* PostGroupInterpreter_h */
