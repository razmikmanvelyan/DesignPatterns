#include "Circle.hpp"

std::unique_ptr<Shape> Circle::clone() const {
    return std::make_unique<Circle>(*this);
}

void Circle::draw() const {
    std::cout << "Drawing a circle" << std::endl;
}