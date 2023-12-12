#pragma once
#include "Shape.hpp"

class Rectangle : public Shape {
public:
    std::unique_ptr<Shape> clone() const override;

    void draw() const override;
};