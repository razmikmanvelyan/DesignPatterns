#pragma once
#include "CPU.hpp"
#include "HardDrive.hpp"
#include "Memory.hpp"

class ComputerFacade {

public:
    void start();
    void shutdown();
    
private:
    CPU cpu;
    Memory memory;
    HardDrive hardDrive;

};