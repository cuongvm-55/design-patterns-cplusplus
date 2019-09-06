//
//  InterpreterContext.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 9/3/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef InterpreterContext_h
#define InterpreterContext_h

#include <iostream>
#include <cmath>
// Interpreter context
// Concrete interpreter will share the same context
class InterpreterContext
{
public:
    InterpreterContext(int originNumber)
    : m_isDone(false), m_currentGroup(0), m_originNumber(originNumber)
    {
        m_totalGroup = std::ceil(getNumberSize(originNumber)/3);
        m_currentNumber = originNumber;
    }
    
    static int getNumberSize(int number)
    {
        std::string str = std::to_string(number);
        return std.length();
    }
    
public:
    int m_currentGroup;
    int m_totalGroup;
    int m_currentNumber;
    int m_originNumber;
    bool m_isDone;
    std::string m_resultText;
};

#endif /* InterpreterContext_h */
