#pragma once
#include <iostream>
#include "Observer.hpp"

namespace observerPattern{
    class CPUMonitor : public Observer {
    public:
        CPUMonitor(std::string name) : name(name) {}

        void update(float) override;

    private:
        std::string name;
    };

}