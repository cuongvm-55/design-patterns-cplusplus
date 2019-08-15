//
//  ZuluTimeImp.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/15/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef ZuluTimeImp_h
#define ZuluTimeImp_h

#include "TimeImpl.h"
#include <iostream>
// Concrete implementor
class ZuluTimeImp: public TimeImpl
{
public:
    ZuluTimeImp(int hr, int min, int zone): TimeImpl(hr, min)
    {
        if (zone == 5)
            strcpy(zone_, " Eastern Standard Time");
        else if (zone == 6)
            strcpy(zone_, " Central Standard Time");
    }
    
    /* virtual */
    virtual void tell() const
    {
        std::cout << "time is " << m_hour << ":" << m_minute << " z" << zone_ <<std::endl;
    }
protected:
    char zone_[30];
};

#endif /* ZuluTimeImp_h */
