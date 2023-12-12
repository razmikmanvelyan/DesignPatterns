#include "DecoratorTest.hpp"

void testDecorator(){
    std::unique_ptr<decorator::Shape> circle = std::make_unique<decorator::Circle>();
    std::unique_ptr<decorator::Shape> rectangle = std::make_unique<decorator::Rectangle>();

    // Decorate Circle with color
    std::unique_ptr<decorator::Shape> coloredCircle = std::make_unique<decorator::ColoredShape>(std::move(circle), "Red");

    // Decorate Rectangle with color
    std::unique_ptr<decorator::Shape> coloredRectangle = std::make_unique<decorator::ColoredShape>(std::move(rectangle), "Blue");

    std::cout << "Drawing colored circle:" << std::endl;
    coloredCircle->draw();

    std::cout << "\nDrawing colored rectangle:" << std::endl;
    coloredRectangle->draw();
}