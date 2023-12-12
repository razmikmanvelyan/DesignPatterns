#include "ColoredShape.hpp"
void decorator::ColoredShape::draw() {
    ShapeDecorator::draw();
    std::cout << "Color: " << color << std::endl;
}