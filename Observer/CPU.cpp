#include "CPU.hpp"

void observerPattern::CPU::attach(std::shared_ptr<Observer> observer) {
    observers.push_back(observer);
}

void observerPattern::CPU::detach(std::shared_ptr<Observer> observer) {
    auto it = std::find(observers.begin(), observers.end(), observer);
    if (it != observers.end()) {
        observers.erase(it);
    }
}

void observerPattern::CPU::notify() {
    for (auto& observer : observers) {
        observer->update(cpuUsage);
    }
}

void observerPattern::CPU::setCPUUsage(float usage) {
    cpuUsage = usage;
    notify();
}