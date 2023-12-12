#pragma once

#include <memory>
#include "Shape.hpp"

namespace decorator {
    class ShapeDecorator : public Shape {

    public:
        ShapeDecorator(std::unique_ptr<Shape> s) : shape(std::move(s)) {}

        void draw() override;

    protected:
        std::unique_ptr<Shape> shape;
    };
}