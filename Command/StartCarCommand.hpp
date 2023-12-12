#pragma once

#include "Command.hpp"
#include "Car.hpp"

namespace commandPattern {
    class StartCarCommand : public Command {
    public:
        StartCarCommand(std::shared_ptr<Car> car) : car(car) {}

        void execute() override;

    private:
        std::shared_ptr<Car> car;
    };
}