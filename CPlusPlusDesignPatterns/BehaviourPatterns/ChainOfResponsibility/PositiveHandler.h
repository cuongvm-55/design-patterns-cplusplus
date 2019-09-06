//
//  PositiveHandler.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/28/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef PositiveHandler_h
#define PositiveHandler_h

#include "AbstractHandler.h"
#include <iostream>

class PositiveHandler : public AbstractHandler
{
public:
    PositiveHandler(AbstractHandler* successor)
    : AbstractHandler(successor)
    {}
    virtual void handleRequestImpl(AbstractRequest* request)
    {
        if (request->m_value > 0)
        {
            std::cout << "Positive value\n";
        }
    }
};

#endif /* PositiveHandler_h */
