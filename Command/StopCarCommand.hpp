#pragma once

#include "Command.hpp"
#include "Car.hpp"

namespace commandPattern {
    class StopCarCommand : public Command {
    public:
        StopCarCommand(std::shared_ptr<Car> car) : car(car) {}

        void execute() override;

    private:
        std::shared_ptr<Car> car;
    };
}