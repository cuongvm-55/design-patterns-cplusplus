//
//  NegativeHandler.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/28/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef NegativeHandler_h
#define NegativeHandler_h

#include "AbstractHandler.h"
#include <iostream>

class NegativeHandler : public AbstractHandler
{
public:
    NegativeHandler(AbstractHandler* successor)
    : AbstractHandler(successor)
    {}
    
    virtual void handleRequestImpl(AbstractRequest* request)
    {
        if (request->m_value < 0)
        {
            std::cout << "Negative value\n";
        }
    }
};

#endif /* NegativeHandler_h */
