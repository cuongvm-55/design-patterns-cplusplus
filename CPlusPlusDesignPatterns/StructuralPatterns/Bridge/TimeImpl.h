//
//  TimeImpl.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/15/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef TimeImpl_h
#define TimeImpl_h

#include <iostream>

// abstract implementor
class TimeImpl
{
public:
    TimeImpl(int h, int m)
        : m_hour(h), m_minute(m)
    {}
    
    virtual ~TimeImpl(){}
    
    virtual void tell() const
    {
        std::cout << "time is " << m_hour << ":"<< m_minute << std::endl;
    }
    
protected:
    int m_hour;
    int m_minute;
};

#endif /* TimeImpl_h */
