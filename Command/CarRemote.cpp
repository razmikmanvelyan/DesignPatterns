#include "CarRemote.hpp"

void commandPattern::CarRemote::setStartCommand(std::shared_ptr<Command> cmd) {
    startCommand = cmd;
}

void commandPattern::CarRemote::setStopCommand(std::shared_ptr<Command> cmd) {
    stopCommand = cmd;
}

void commandPattern::CarRemote::startCar() {
    if (startCommand) {
        startCommand->execute();
    } else {
        std::cout << "No start command set\n";
    }
}

void commandPattern::CarRemote::stopCar() {
    if (stopCommand) {
        stopCommand->execute();
    } else {
        std::cout << "No stop command set\n";
    }
}