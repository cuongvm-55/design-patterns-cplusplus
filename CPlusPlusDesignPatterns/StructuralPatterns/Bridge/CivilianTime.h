//
//  CivilianTime.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/15/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef CivilianTime_h
#define CivilianTime_h

#include "Time.h"
#include "CivilianTimeImpl.h"

// concrete time
class CivilianTime: public Time
{
public:
    CivilianTime(int hr, int min, int pm)
    {
        imp_ = new CivilianTimeImpl(hr, min, pm);
    }
};

#endif /* CivilianTime_h */
