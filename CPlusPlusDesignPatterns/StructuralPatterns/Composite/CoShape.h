//
//  CoShape.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/16/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef CoShape_h
#define CoShape_h

#include <vector>
class CoShape
{
public:
    virtual ~CoShape(){}
    virtual std::vector<CoShape*> explodeShape() const = 0;
    virtual void renderToScreen() const = 0;
};

#endif /* CoShape_h */
