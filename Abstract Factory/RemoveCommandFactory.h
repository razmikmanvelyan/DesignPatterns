#pragma once
#include "CommandFactory.h"
#include "RemoveCommand.h"

namespace abstract_factory {
    class RemoveCommandFactory : public CommandFactory {
    public:
        std::shared_ptr<Command> createCommand() override;
    };
}