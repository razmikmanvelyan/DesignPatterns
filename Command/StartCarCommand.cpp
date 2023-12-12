#include "StopCarCommand.hpp"

void commandPattern::StopCarCommand::execute()  {
    car->stop();
}