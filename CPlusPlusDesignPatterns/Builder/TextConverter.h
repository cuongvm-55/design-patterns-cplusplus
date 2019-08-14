//
//  TextConverter.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/13/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef TextConverter_h
#define TextConverter_h

// Absctract builder
class TextConverter
{
public:
    virtual void convertText(char c) = 0;
    virtual void convertPara() = 0;
};

#endif /* TextConverter_h */
