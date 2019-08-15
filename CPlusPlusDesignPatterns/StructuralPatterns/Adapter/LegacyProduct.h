//
//  LegacyProduct.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/15/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef LegacyProduct_h
#define LegacyProduct_h

// Legacy data structure that is not understandable by Client
class LegacyProduct
{
public:
    LegacyProduct(std::string vName, std::string serial)
        : m_vendorName(vName), m_serial(serial)
    {
    }
    virtual ~LegacyProduct(){}
    
public:
    std::string m_vendorName;
    std::string m_serial;
};

#endif /* LegacyProduct_h */
