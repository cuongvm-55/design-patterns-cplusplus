//
//  CoLine.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/16/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef CoLine_h
#define CoLine_h

#include "CoShape.h"
#include <iostream>
#include <vector>

// Abstraction of Leaf object
class CoLine : public CoShape
{
public:
    CoLine(int x1, int y1, int x2, int y2)
        : m_x1(x1), m_y1(y1), m_x2(x2), m_y2(y2)
    {}
    virtual ~CoLine(){}
    
    virtual std::vector<CoShape*> explodeShape() const
    {
        return std::vector<CoShape*>({(CoShape*)this});
    }
    
    virtual void renderToScreen() const
    {
        std::cout << "Line rendered from (" << m_x1 << "," << m_y1 << ") to (" << m_x2 << "," << m_y2 <<")\n";
    }
private:
    int m_x1;
    int m_y1;
    int m_x2;
    int m_y2;
};
#endif /* CoLine_h */
