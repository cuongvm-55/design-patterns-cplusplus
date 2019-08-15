//
//  ZuluTime.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/15/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef ZuluTime_h
#define ZuluTime_h

#include "Time.h"
#include "ZuluTimeImp.h"
class ZuluTime: public Time
{
public:
    ZuluTime(int hr, int min, int zone)
    {
        imp_ = new ZuluTimeImp(hr, min, zone);
    }
};

#endif /* ZuluTime_h */
