#pragma once

#include "Builder.h"

class Director
{
private:
    Builder* builder;
public:
    void set_builder(Builder *builder)
    {
        this->builder = builder;
    }

    void BuildMinimalViableProduct()
    {
        this->builder->ProducePartA();
    }

    void BuildFullFeatureProduct()
    {
        this->builder->ProducePartA();
        this->builder->ProducePartB();
        this->builder->ProducePartC();
    }
};