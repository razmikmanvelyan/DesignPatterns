#include "AbstractFactoryTest.hpp"

void testAbstractFactory() {
    std::shared_ptr<abstract_factory::CommandFactory> addCommandFactory = std::make_shared<abstract_factory::AddCommandFactory>();
    std::shared_ptr<abstract_factory::Command> addCommand = addCommandFactory->createCommand();

    // Execute Add Command
    addCommand->execute();

    // Create an abstract factory for Remove Command
    std::shared_ptr<abstract_factory::CommandFactory> removeCommandFactory = std::make_shared<abstract_factory::RemoveCommandFactory>();
    std::shared_ptr<abstract_factory::Command> removeCommand = removeCommandFactory->createCommand();

    // Execute Remove Command
    removeCommand->execute();

}