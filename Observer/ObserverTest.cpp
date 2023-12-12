#include "ObserverTest.hpp"

void testObserver() {
    observerPattern::CPU cpu;

    // Creating observers (CPUMonitor objects)
    auto monitor1 = std::make_shared<observerPattern::CPUMonitor>("Monitor 1");
    auto monitor2 = std::make_shared<observerPattern::CPUMonitor>("Monitor 2");

    // Attaching observers to the subject (CPU)
    cpu.attach(monitor1);
    cpu.attach(monitor2);

    // Simulating CPU usage changes
    cpu.setCPUUsage(80.5f);

    // Detaching an observer
    cpu.detach(monitor1);

    // Simulating another CPU usage change
    cpu.setCPUUsage(95.2f);
}