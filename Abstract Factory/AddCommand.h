#pragma once
#include "Command.h"

namespace abstract_factory {
    class AddCommand : public Command {
    public:
        void execute() override;
    };
}