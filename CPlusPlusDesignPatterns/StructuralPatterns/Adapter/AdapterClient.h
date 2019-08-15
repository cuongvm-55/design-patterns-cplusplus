//
//  Client.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/15/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef AdapterClient_h
#define AdapterClient_h

#include "Interface.h"
// Abstract client object
class AdapterClient
{
public:
    AdapterClient(Interface* interface)
    {
        m_interface = interface;
    }
    
    virtual ~AdapterClient()
    {
        m_interface = nullptr;
    }
    
    Product* requestProduct() const
    {
        return m_interface->request();
    }
    
private:
    Interface* m_interface;
};

#endif /* AdapterClient_h */
