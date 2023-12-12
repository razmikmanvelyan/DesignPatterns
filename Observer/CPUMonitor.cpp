#include "CPUMonitor.hpp"

void observerPattern::CPUMonitor::update(float cpuUsage) {
        std::cout << "Notification for " << name << ": CPU Usage is now " << cpuUsage << "%" << std::endl;
}
