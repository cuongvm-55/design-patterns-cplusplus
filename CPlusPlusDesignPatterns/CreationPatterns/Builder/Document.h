//
//  Document.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/13/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef Document_h
#define Document_h

#include <iostream>

static char EOF_CHAR ='0'; //Delimitor for End of File
const char CHAR='c';
const char PARA='p';

// Abstract the document
class Document
{
public:
    Document()
    {
        m_buffer = "c1111112222222pAAAAABBBBBBBc5454c67867pBBBBBB";
        m_curIndex = 0;
    }
    
    void beginRead()
    {
        m_curIndex = 0;
    }
    
    char getNextToken(){
        //Get the next token
        if (m_curIndex < m_buffer.length())
        {
            return m_buffer[m_curIndex++];
        }
        return EOF_CHAR; // EOF
    }
    
    void close()
    {
        m_curIndex = 0;
    }
    
private:
    int m_curIndex;
    std::string m_buffer;
};
#endif /* Document_h */
