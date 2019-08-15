//
//  CivilianTimeImpl.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/15/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef CivilianTimeImpl_h
#define CivilianTimeImpl_h

// Concrete implementor
class CivilianTimeImpl : public TimeImpl
{
public:
    CivilianTimeImpl(int h, int m, bool isPM)
        : TimeImpl(h, m)
    {
        if (isPM)
        {
            strcpy(m_whichM, " PM");
        }
        else
        {
            strcpy(m_whichM, " AM");
        }
    }
    
    virtual ~CivilianTimeImpl(){}
    
    virtual void tell() const
    {
        std::cout << "time is " << m_hour << ":" << m_minute << m_whichM << std::endl;
    }
private:
    char m_whichM[4];
};

#endif /* CivilianTimeImpl_h */
