#pragma once
#include <iostream>
#include "Shape.hpp"
namespace decorator{
    class Circle : public Shape {
    public:
        void draw() override;
    };
}