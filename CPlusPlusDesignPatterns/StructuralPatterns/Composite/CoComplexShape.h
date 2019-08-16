//
//  CoComplexShape.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/16/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef CoComplexShape_h
#define CoComplexShape_h

#include "CoShape.h"
#include <iostream>
#include <vector>
#include <algorithm>
// Composite abstraction
class CoComplexShape : public CoShape
{
public:
    CoComplexShape(){}
    virtual ~CoComplexShape(){}
    
    virtual std::vector<CoShape*> explodeShape() const
    {
        return m_childs;
    }
    virtual void renderToScreen() const
    {
        std::cout << "CoComplexShape's being rendered to screen\n";
        for(int i = 0; i < m_childs.size(); i++)
        {
            m_childs[i]->renderToScreen();
        }
    }
    
    void addChild(CoShape* shape)
    {
        m_childs.push_back(shape);
    }
    
    void removeChild(CoShape* shape)
    {
        m_childs.erase(std::remove(m_childs.begin(), m_childs.end(), shape), m_childs.end());
    }
    
    CoShape* getChild(int index)
    {
        if (index < 0 || index >= m_childs.size())
        {
            return nullptr;
        }
        return m_childs[index];
    }
    
private:
    std::vector<CoShape*> m_childs;
};
#endif /* CoComplexShape_h */
