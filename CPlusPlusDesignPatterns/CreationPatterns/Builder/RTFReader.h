//
//  RTFReader.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/13/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef RTFReader_h
#define RTFReader_h

#include "TextConverter.h"
#include "Document.h"
// Director
class RTFReader
{
    enum ReadState
    {
        STATE_NONE = 0,
        STATE_CHAR,
        STATE_PARA
    };
public:
    RTFReader(TextConverter* converter)
    {
        m_builder = converter;
    }
    
    void parseRTF(Document* doc)
    {
        ReadState readState = STATE_NONE;
        while ((t=doc->getNextToken())!= EOF_CHAR)
        {
            switch (readState)
            {
                case STATE_NONE:
                    if (t == CHAR)
                    {
                        readState = STATE_CHAR;
                    }
                    else if (t == PARA)
                    {
                        readState = STATE_PARA;
                    }
                    break;
                case STATE_CHAR:
                    if (t == PARA)
                    {
                        readState = STATE_PARA;
                    }
                    else
                    {
                        m_builder->convertText(t);
                    }
                    break;
                case STATE_PARA:
                    if (t == CHAR)
                    {
                        readState = STATE_CHAR;
                    }
                    else
                    {
                        m_builder->convertPara();
                    }
                    break;
                default:
                    std::cout << "token not handle: " << t << std::endl;
            }
        }
    }
private:
    char t;
    TextConverter* m_builder;
};

#endif /* RTFReader_h */
