#pragma once

#include <iostream>
#include <string>


enum Type
{
    PROTOTYPE_1 = 0,
    PROTOTYPE_2
};

class Prototype
{
protected:
    std::string prototype_name_;
    float prototype_field_;
public:
    Prototype() {}
    Prototype(std::string prototype_name) 
    : prototype_name_(prototype_name)
    {}

    virtual ~Prototype(){};
    virtual Prototype *Clone() const = 0;
    virtual void Method(float prototype_field)
    {
        this->prototype_field_ = prototype_field;
        std::cout << "Call method from " << prototype_name_ << " with field : " << prototype_field << std::endl;
    }
};