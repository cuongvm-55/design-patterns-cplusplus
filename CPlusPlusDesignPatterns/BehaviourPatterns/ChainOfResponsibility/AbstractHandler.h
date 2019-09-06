//
//  AbstractHandler.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/28/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef AbstractHandler_h
#define AbstractHandler_h

#include "AbstractRequest.h"
class AbstractHandler
{
public:
    AbstractHandler(AbstractHandler* successor)
    : m_successor(successor)
    {
    }
    virtual ~AbstractHandler(){}
    
    virtual void handleRequestImpl(AbstractRequest* request) = 0;
    virtual void handleRequest(AbstractRequest* request)
    {
        // this handler handles request
        this->handleRequestImpl(request);
        // call the next handler in the chain to continue handling the request
        if (m_successor)
        {
            m_successor->handleRequest(request);
        }
    }
protected:
    AbstractHandler* m_successor;
};
#endif /* AbstractHandler_h */
