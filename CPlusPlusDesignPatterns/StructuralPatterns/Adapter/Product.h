//
//  Product.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/15/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef Product_h
#define Product_h

#include <iostream>

// Data structure used by Client
class Product
{
public:
    Product(const std::string& name) : m_name(name)
    {
        
    }
    virtual ~Product(){}
    
public:
    std::string m_name;
};

#endif /* Product_h */
