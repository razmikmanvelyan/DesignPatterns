#pragma once
#include "Command.hpp"

namespace abstract_factory {

    class CommandFactory {
    public:
        virtual std::shared_ptr<Command> createCommand() = 0;
        virtual ~CommandFactory() {}
    };

}