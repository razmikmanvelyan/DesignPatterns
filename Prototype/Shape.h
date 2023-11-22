#pragma once
#include <iostream>
#include <memory>

// Prototype interface
class Shape {
public:
    virtual std::unique_ptr<Shape> clone() const = 0;
    virtual void draw() const = 0;
};