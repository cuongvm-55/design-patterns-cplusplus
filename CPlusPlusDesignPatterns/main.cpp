//
//  main.cpp
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/13/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#include <iostream>

#include "Singleton.hpp"
#include "StoogeFactory.hpp"
#include "TestBefore.h"
#include "WindowWidgetFactory.h"
#include "LinuxWidgetFactory.h"
#include "TestAfter.h"
#include "TestBuilder.h"
#include "ObjectPool.h"

#define WINDOW
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "C++ design patterns" << std::endl;
    
    // creational patterns
    // singleton
    //Singleton& singleton = Singleton::GetInstance();
    //singleton.print();
    
    //Singleton* pSingleton = Singleton::Instance();
    //pSingleton->print();
    
    // Factory
    // simple factory
    //Stooge* stooge = StoogeFactory::GetInstance().createStooge("larry");
    //stooge->slapSticks();
    
    // abstract factory before
    //TestBefore* tf = new TestBefore();
    //tf->draw();
    
    // abstract factory after
    /*
    WidgetFactory* widgetFactory;
#ifdef WINDOW
    widgetFactory = new WindowWidgetFactory();
#else
    widgetFactory = new LinuxWidgetFactory();
#endif
    TestAfter* ta = new TestAfter(widgetFactory);
    ta->draw();
    
    TestBuilder* testBuilder = new TestBuilder();
    testBuilder->readDocument();
     */
    
    // object pool
    /*
    ObjectPool* pool = ObjectPool::getInstance();
    Resource* res1 = pool->acquireResource();    
    Resource* res2 = pool->acquireResource();
    res2->m_key = "key2";
    res2->m_value = "value2";
    
    pool->releaseResource(res1);
    pool->releaseResource(res2);
    delete pool;
     */
    return 0;
}
