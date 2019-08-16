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

#include "CommandManager.h"

#include "Adapter.h"
#include "AdapterClient.h"

#include "CivilianTime.h"
#include "ZuluTime.h"

#include "CoLine.h"
#include "CoRectangle.h"
#include "CoComplexShape.h"

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
    
    // prototype
    /*
    ICamCommand* command = CommandManager::createCommand(CommandType::DOME_COMMAND);
    command->execute();
    
    delete command;
    command = CommandManager::createCommand(CommandType::SURVEILANCE_COMMAND);
    command->execute();
    */
    
    // Adapter
    // using composition (has-a relationship) implementation
    /*
    Adapter* adapter = new Adapter();
    AdapterClient* aClient = new AdapterClient(adapter);
    Product* p = aClient->requestProduct();
    std::cout << "Product name: " << p->m_name << std::endl;
    */
    
    // Bridge
    // Double abstraction
    /*CivilianTime* cTime = new CivilianTime(3, 50, true);
    cTime->tell();
    
    ZuluTime* zTime = new ZuluTime(3, 51, 5);
    zTime->tell();
    */
    
    /*
    int length = 10;
    char* pChar = new char[length];
    for(int i=0;i<length; i++)
    {
        *(pChar+i) = 'a';
    };
    std::cout << "pChar: " << pChar << std::endl;
    
    delete[] pChar;
    pChar = NULL;
    */
    
    // Composite
    // Graphic editor example
    CoShape* line = new CoLine(10, 5, 20, 4);
    line->renderToScreen();
    
    CoShape* left = new CoLine(0,10, 0,0);
    CoShape* top = new CoLine(0,0, 20,0);
    CoShape* right = new CoLine(20,0, 20,10);
    CoShape* bottom = new CoLine(20,10, 0,10);
    CoShape* rect = new CoRectangle(left, top, right, bottom);
    rect->renderToScreen();
    
    std::vector<CoShape*> rectLines = rect->explodeShape();
    for(int i=0;i<rectLines.size();i++)
    {
        rectLines[i]->renderToScreen();
    }
    
    CoComplexShape* complex = new CoComplexShape();
    complex->addChild(rect);
    complex->addChild(line);
    complex->removeChild(line);
    complex->renderToScreen();
    
    return 0;
}
