//
//  Time.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/15/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef Time_h
#define Time_h

#include "TimeImpl.h"
class Time
{
public:
    Time(){}
    Time(int hr, int min)
    {
        imp_ = new TimeImpl(hr, min);
    }
    virtual void tell()
    {
        imp_->tell();
    }
    virtual ~Time(){}
protected:
    TimeImpl *imp_;
};

#endif /* Time_h */
