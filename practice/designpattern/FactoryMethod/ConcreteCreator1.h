#pragma once

#include "Creator.h"
#include "ConcreteProduct1.h"

class ConcreteCreator1 : public Creator{
public:
    Product *FactoryMethod() const override
    {
        return new ConcreteProduct1();
    }
};