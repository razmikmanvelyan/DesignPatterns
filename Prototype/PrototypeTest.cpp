#include "PrototypeTest.hpp"

void testPrototype() {
    std::unique_ptr<Shape> circlePrototype = std::make_unique<Circle>();
    std::unique_ptr<Shape> rectanglePrototype = std::make_unique<Rectangle>();

    // Clone and draw shapes
    std::unique_ptr<Shape> shape1 = circlePrototype->clone();
    std::unique_ptr<Shape> shape2 = rectanglePrototype->clone();

    shape1->draw();
    shape2->draw();
}