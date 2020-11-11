#pragma once

#include "AbstractProductB.h"

class ConcreteProductB2 : public AbstractProductB
{
public:
    std::string UsefulFunctionB() const override
    {
        return "The result of the product B2";
    }

    std::string AnotherUsefulFunctionB(const AbstractProductA &collaboration) const override
    {
        const std::string result =  collaboration.UsefulFunctionA();
        return "The result of the B2 collaborating with ( " + result + " )";
    }
};