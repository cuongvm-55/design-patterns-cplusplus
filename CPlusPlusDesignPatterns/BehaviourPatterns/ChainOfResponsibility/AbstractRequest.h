//
//  AbstractRequest.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/28/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef AbstractRequest_h
#define AbstractRequest_h

class AbstractRequest
{
public:
    AbstractRequest(int value)
    : m_value(value)
    {}
    virtual ~AbstractRequest(){}
    
public:
    int m_value;
};
#endif /* AbstractRequest_h */
