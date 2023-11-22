#pragma once
#include "CommandFactory.h"
#include "AddCommand.h"

namespace abstract_factory {
    class AddCommandFactory : public CommandFactory {
    public:
        std::shared_ptr<Command> createCommand() override;
    };
}