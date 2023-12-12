#pragma once
#include "Builder.hpp"

class Director {
public:
    Director(Builder* builder);

    void construct();

private:
    Builder* builder;
};