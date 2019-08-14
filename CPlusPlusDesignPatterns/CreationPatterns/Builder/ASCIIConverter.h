//
//  ASCIIConverter.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/13/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef ASCIIConverter_h
#define ASCIIConverter_h

#include "TextConverter.h"
#include "ASCIIText.h"

// Concrete builder
class ASCIIConverter : public TextConverter
{
public:
    ASCIIConverter()
    {
        m_resultText = new ASCIIText();
    }
    virtual ~ASCIIConverter()
    {
        if (m_resultText != nullptr)
        {
            delete m_resultText;
            m_resultText = nullptr;
        }
    }
    virtual void convertText(char c)
    {
        std::cout << "ASCIIConverter::convertText" << std::endl;
        m_resultText->append(c);
    }
    virtual void convertPara()
    {
        std::cout << "ASCIIConverter::convertPara" << std::endl;
    }
    
    ASCIIText* getResult()
    {
        return m_resultText;
    }
    
private:
    ASCIIText* m_resultText;
    
};
#endif /* ASCIIConverter_h */
