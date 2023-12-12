#include "Rectangle.hpp"

std::unique_ptr<Shape> Rectangle::clone() const {
	return std::make_unique<Rectangle>(*this);
}

void Rectangle::draw() const {
	std::cout << "Drawing a rectangle" << std::endl;
}
