#include "Car.hpp"

void commandPattern::Car::start() {
    std::cout << "Car started\n";
}

void commandPattern::Car::stop() {
    std::cout << "Car stopped\n";
}

void commandPattern::Car::honk() {
    std::cout << "Car honked\n";
}