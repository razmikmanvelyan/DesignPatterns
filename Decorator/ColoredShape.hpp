#include <iostream>
#include "ShapeDecorator.hpp"
namespace decorator{
    class ColoredShape : public ShapeDecorator {
    private:
        std::string color;

    public:
        ColoredShape(std::unique_ptr<Shape> s, const std::string& c) : ShapeDecorator(std::move(s)), color(c) {}
        void draw() override;
    };
}
