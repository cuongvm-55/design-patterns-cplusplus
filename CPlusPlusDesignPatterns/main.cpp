//
//  main.cpp
//  CPlusPlusDesignPatterns
//
//  Created by Apple on 8/13/19.
//  Copyright © 2019 Apple. All rights reserved.
//

#include <iostream>
#include <assert.h>

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

#include "ConcreteComponent.h"
#include "DecoratorAddFlower.h"
#include "DecoratorAddColor.h"

#include "FlyWeightFactory.h"

#include "SmartPointer.h"
#include "P_Subject.h"

#define WINDOW
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "C++ design patterns" << std::endl;
    
    // creational patterns
    // singleton
#ifdef TEST_SINGLETON
    //Singleton& singleton = Singleton::GetInstance();
    //singleton.print();
    Singleton* pSingleton = Singleton::Instance();
    pSingleton->print();
#endif
    
    // Factory
    // simple factory
#ifdef TEST_FACTORY
    Stooge* stooge = StoogeFactory::GetInstance().createStooge("larry");
    stooge->slapSticks();
#endif
    // abstract factory before
#ifdef TEST_ABSTRACT_FACTORY
    TestBefore* tf = new TestBefore();
    tf->draw();
    
    // abstract factory after
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
#endif
    
    // object pool
#ifdef TEST_OBJECT_POOL
    ObjectPool* pool = ObjectPool::getInstance();
    Resource* res1 = pool->acquireResource();    
    Resource* res2 = pool->acquireResource();
    res2->m_key = "key2";
    res2->m_value = "value2";
    
    pool->releaseResource(res1);
    pool->releaseResource(res2);
    delete pool;
#endif
    
    // prototype
#ifdef TEST_PROTOTYPE
    ICamCommand* command = CommandManager::createCommand(CommandType::DOME_COMMAND);
    command->execute();
    
    delete command;
    command = CommandManager::createCommand(CommandType::SURVEILANCE_COMMAND);
    command->execute();
#endif
    
    // Adapter
    // using composition (has-a relationship) implementation
#ifdef TEST_ADAPTER
    Adapter* adapter = new Adapter();
    AdapterClient* aClient = new AdapterClient(adapter);
    Product* p = aClient->requestProduct();
    std::cout << "Product name: " << p->m_name << std::endl;
#endif
    
    // Bridge
    // Double abstraction
#ifdef TEST_BRIDGE
    CivilianTime* cTime = new CivilianTime(3, 50, true);
    cTime->tell();
    
    ZuluTime* zTime = new ZuluTime(3, 51, 5);
    zTime->tell();
#endif
    
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
#ifdef TEST_COMPOSITE
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
#endif
    
#ifdef TEST_DECORATOR
    Component* component = new DecoratorAddColor(new DecoratorAddFlower(new DecoratorAddColor(new DecoratorAddFlower(new ConcreteComponent(), "rose"), "red"), "lavender"), "purple");
    component->doOperation();
    std::cout << std::endl;
#endif
    
#ifdef TEST_FLYWEIGHT
    FlyWeight* bird1 = FlyWeightFactory::getInstance()->getFlyWeight(FlyWeightType::FWT_BIRD);
    FlyWeight* bird2 = FlyWeightFactory::getInstance()->getFlyWeight(FlyWeightType::FWT_BIRD);
    
    bird1->doOperation(new ExtrinsicState(0,0, 5,5));
    bird2->doOperation(new ExtrinsicState(9,9, 15,15));
    
    assert((bird1 == bird2));
#endif
    
#ifndef TEST_PROXY
    P_Subject* subject = new P_Subject("Micheal Jackson");
    SmartPointer<P_Subject> smartPtr(subject);
    smartPtr->doOperation();
    (*smartPtr).doOperation();
    {
        SmartPointer<P_Subject> secondSmartPtr(smartPtr);
    }
    {
        SmartPointer<P_Subject> thirdSmartPtr(subject);
        thirdSmartPtr = smartPtr;
    }
    
    if (smartPtr)
    {
        std::cout << "subject is not deleted here\n";
    }
    
#endif
    return 0;
}
