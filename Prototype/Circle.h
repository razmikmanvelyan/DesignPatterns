#pragma once
#include "Shape.h"

class Circle : public Shape {
public:
    std::unique_ptr<Shape> clone() const override;

    void draw() const override;
};