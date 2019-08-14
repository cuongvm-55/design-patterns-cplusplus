//
//  TestBuilder.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/13/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef TestBuilder_h
#define TestBuilder_h

#include "RTFReader.h"
#include "ASCIIConverter.h"
class TestBuilder
{
public:
    void readDocument(){
        Document* doc = new Document();
        ASCIIConverter* asciiBuilder = new ASCIIConverter();
        RTFReader* rtfReader = new RTFReader(asciiBuilder);
        rtfReader->parseRTF(doc);
        ASCIIText* asciiText = asciiBuilder->getResult();
        
        std::cout << "read document with ascii converter: " << asciiText->toString() << std::endl;
    }
};

#endif /* TestBuilder_h */
