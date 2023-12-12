#pragma once
#include "CommandFactory.hpp"
#include "RemoveCommand.hpp"

namespace abstract_factory {
    class RemoveCommandFactory : public CommandFactory {
    public:
        std::shared_ptr<Command> createCommand() override;
    };
}