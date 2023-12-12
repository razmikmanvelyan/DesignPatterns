#pragma once

#include <iostream>
#include <vector>
#include <memory>
#include "Observer.hpp"

namespace observerPattern {
    class CPU {
    public:
        void attach(std::shared_ptr<Observer>);

        void detach(std::shared_ptr<Observer>);

        void notify();

        void setCPUUsage(float);

    private:
        float cpuUsage;
        std::vector<std::shared_ptr<Observer>> observers;
    };
}