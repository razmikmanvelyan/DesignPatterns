#pragma once
#include "CommandFactory.hpp"
#include "AddCommand.hpp"

namespace abstract_factory {
    class AddCommandFactory : public CommandFactory {
    public:
        std::shared_ptr<Command> createCommand() override;
    };
}