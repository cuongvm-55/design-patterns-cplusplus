//
//  CoReactangle.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/16/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef CoRectangle_h
#define CoRectangle_h

#include "CoShape.h"
#include <iostream>
#include <vector>
// Composite abstraction
class CoRectangle : public CoShape
{
public:
    CoRectangle(CoShape* left, CoShape* top, CoShape* right, CoShape* bottom)
    {
        m_edges[0] = left;
        m_edges[1] = top;
        m_edges[2] = right;
        m_edges[3] = bottom;
    }
    virtual ~CoRectangle(){}
    virtual std::vector<CoShape*> explodeShape() const
    {
        return std::vector<CoShape*>(std::begin(m_edges), std::end(m_edges));
    }
    virtual void renderToScreen() const
    {
        std::cout << "Rectangle's being rendered to screen\n";
        for(int i=0; i<4;i++)
        {
            m_edges[i]->renderToScreen();
        }
    }
    
private:
    CoShape* m_edges[4];
};

#endif /* CoRectangle_h */
