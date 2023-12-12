#include "ComputerFacade.hpp"

void ComputerFacade::start() {
    cpu.start();
    memory.load();
    hardDrive.read();
}

void ComputerFacade::shutdown() {
    cpu.stop();
    memory.unload();
    hardDrive.write();
}