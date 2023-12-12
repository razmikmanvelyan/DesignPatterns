#include "FactoryTest.hpp"

void testFactory() {
    std::shared_ptr<Command> addCommand = CommandFactory::createCommand(CommandType::ADD);
    if (addCommand) {
        addCommand->execute();
    }
    else {
        std::cout << "Unsupported command type." << std::endl;
    }

    // Create and execute a Remove Command
    std::shared_ptr<Command> removeCommand = CommandFactory::createCommand(CommandType::REMOVE);
    if (removeCommand) {
        removeCommand->execute();
    }
    else {
        std::cout << "Unsupported command type." << std::endl;
    }

}