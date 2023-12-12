#pragma once
#include <iostream>
#include "Shape.hpp"
namespace decorator{
    class Rectangle : public Shape {
    public:
        void draw() override;
    };
}