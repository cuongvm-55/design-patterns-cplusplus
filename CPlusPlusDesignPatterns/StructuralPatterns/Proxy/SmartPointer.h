//
//  SmartPointer.h
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/18/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#ifndef SmartPointer_h
#define SmartPointer_h

#include <map>

// Abstract subject
template <class T>
class SmartPointer
{
public:
    SmartPointer(T* wrappee)
    : m_wrappee(wrappee)
    {
        m_refCount = new int;
        *m_refCount = 1;
    }
    
    SmartPointer(const SmartPointer& other)
    : m_refCount(other.m_refCount), m_wrappee(other.m_wrappee)
    {
        std::cout << "SmartPointer's copy constructor\n";
        (*m_refCount)++;
    }
    
    SmartPointer& operator =(const SmartPointer& other)
    {
        std::cout << "SmartPointer's assign operator\n";
        // prevent assign itself
        if (this == &other)
        {
            return *this;
        }
        
        m_refCount = other.m_refCount;
        m_wrappee = other.m_wrappee;
        (*m_refCount)++;
        
        return *this;
    }
    
    virtual ~SmartPointer()
    {
        std::cout << "SmartPointer's dtor\n";
        --(*m_refCount);
        // delete the inner pointer when ref count is zero
        if (*m_refCount == 0 && m_wrappee)
        {
            delete m_wrappee;
            m_wrappee = nullptr;
            // clean up counter
            delete m_refCount;
        }
    }
    
    // override dereferencing & referencing
    T& operator* ()
    {
        return *m_wrappee;
    }
    
    T* operator-> ()
    {
        return m_wrappee;
    }
    
    // Access to smart pointer state
    T* get()                 const {return m_wrappee;}
    explicit operator bool() const {return m_wrappee;}
    
private:
    T* m_wrappee;
    int* m_refCount;
};
#endif /* SmartPointer_h */
