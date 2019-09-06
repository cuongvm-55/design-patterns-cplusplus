//
//  ZeroHandler.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/28/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef ZeroHandler_h
#define ZeroHandler_h

#include "AbstractHandler.h"
#include <iostream>

class ZeroHandler : public AbstractHandler
{
public:
    ZeroHandler(AbstractHandler* successor)
    : AbstractHandler(successor)
    {}
    virtual void handleRequestImpl(AbstractRequest* request)
    {
        if (request->m_value == 0)
        {
            std::cout << "Zero value\n";
        }
    }
};

#endif /* ZeroHandler_h */
