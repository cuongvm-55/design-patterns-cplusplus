//
//  P_Subject.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/18/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef P_Subject_h
#define P_Subject_h

#include <iostream>
class P_Subject
{
public:
    P_Subject(std::string name)
    : m_name(name)
    {}
    
    virtual ~P_Subject()
    {
        std::cout <<"P_Subject' dtor\n";
    }
    
    virtual void doOperation()
    {
        std::cout <<"P_Subject' doOperation\n";
    }
    
private:
    std::string m_name;
};

#endif /* P_Subject_h */
