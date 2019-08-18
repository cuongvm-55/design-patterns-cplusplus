//
//  ẼtrinsicState.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/18/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef ExtrinsicState_h
#define ExtrinsicState_h

#include <iostream>

// Extrinsic state of object that cannot be shared by clients
// Clients of the object must maintain and supply extrinsic state to object when perform operation
class ExtrinsicState
{
public:
    ExtrinsicState(int oldX, int oldY, int newX, int newY)
    : m_oldX(oldX), m_oldY(oldY), m_x(newX), m_y(newY)
    {}
    virtual ~ExtrinsicState(){}
    
    void display()
    {
        std::cout<<"oldX: " << m_oldX << ", oldY: " << m_oldY << ", x: " <<m_x << ", y: " <<m_y << std::endl;
    }
private:
    int m_oldX;
    int m_oldY;
    int m_x;
    int m_y;
};

#endif /* ExtrinsicState_h */
