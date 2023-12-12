#include "Circle.hpp"

void Bridge::Circle::draw() {
    rendererAPI->renderCircle(x, y, radius);
}