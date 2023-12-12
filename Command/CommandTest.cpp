#include "CommandTest.hpp"

void testCommand() {
    auto car = std::make_shared<commandPattern::Car>();

    auto startCommand = std::make_shared<commandPattern::StartCarCommand>(car);
    auto stopCommand = std::make_shared<commandPattern::StopCarCommand>(car);

    commandPattern::CarRemote remote;
    remote.setStartCommand(startCommand);
    remote.setStopCommand(stopCommand);

    remote.startCar(); 
    remote.stopCar();  
}