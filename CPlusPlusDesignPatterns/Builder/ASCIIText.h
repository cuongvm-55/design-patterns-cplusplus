//
//  ASCIIText.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/13/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef ASCIIText_h
#define ASCIIText_h

#include <stdio.h>
#include <iostream>

// Product
class ASCIIText
{
public:
    void append(char c)
    {
        m_buffer.append(1u, c);
    }
    
    std::string toString()
    {
        return m_buffer;
    }
private:
    std::string m_buffer;
};
#endif /* ASCIIText_h */
