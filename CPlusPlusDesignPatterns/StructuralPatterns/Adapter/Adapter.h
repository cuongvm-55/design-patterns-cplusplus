//
//  Adapter.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/15/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef Adapter_h
#define Adapter_h

#include "Interface.h"
#include "Adaptee.h"
class Adapter : public Interface
{
public:
    virtual Product* request() const
    {
        std::cout << "Adapter request is called\n";
        // redirect the call to legacy library
        Adaptee* adaptee = new Adaptee();
        LegacyProduct* legacyProd = adaptee->legacyRequest();
        // convert data structure
        Product* product = new Product(legacyProd->m_vendorName + "/" + legacyProd->m_serial);
        
        delete legacyProd;
        delete adaptee;
        return product;
    }
};

#endif /* Adapter_h */
