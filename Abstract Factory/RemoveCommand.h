#pragma once
#include "Command.h"

namespace abstract_factory {

    class RemoveCommand : public Command {
    public:
        void execute() override;
    };

}