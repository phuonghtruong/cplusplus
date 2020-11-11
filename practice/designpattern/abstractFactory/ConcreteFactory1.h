#pragma once

#include "AbstractFactory.h"
#include "ConcreteProductA1.h"
#include "ConcreteProductB1.h"

class ConcreteFactory1 : public AbstractFactory
{
public:
    AbstractProductA *CreateProductA() const override{
        return new ConcreteProductA1();
    }
    AbstractProductB *CreateProductB() const override{
        return new ConcreteProductB1();
    }
};