#pragma once
#include "Command.hpp"

namespace abstract_factory {
    class AddCommand : public Command {
    public:
        void execute() override;
    };
}