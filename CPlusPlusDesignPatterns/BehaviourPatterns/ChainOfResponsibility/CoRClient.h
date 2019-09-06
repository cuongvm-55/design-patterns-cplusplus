//
//  Client.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/28/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef Client_h
#define Client_h

#include "AbstractRequest.h"
#include "AbstractHandler.h"

class CoRClient
{
public:
    CoRClient(AbstractHandler* handler)
    : m_handler(handler)
    {}
    
    void handleRequest(AbstractRequest* request)
    {
        m_handler->handleRequest(request);
    }
    
private:
    AbstractHandler* m_handler;
};

#endif /* Client_h */
