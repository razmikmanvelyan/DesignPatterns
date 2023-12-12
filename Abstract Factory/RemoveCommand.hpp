#pragma once
#include "Command.hpp"

namespace abstract_factory {

    class RemoveCommand : public Command {
    public:
        void execute() override;
    };

}