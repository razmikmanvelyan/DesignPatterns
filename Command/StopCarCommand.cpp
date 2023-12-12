#include "StartCarCommand.hpp"

void commandPattern::StartCarCommand::execute()  {
    car->start();
}