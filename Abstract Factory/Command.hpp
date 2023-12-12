#pragma once
#include <iostream>
#include <memory>

namespace abstract_factory {
    // Command interface
    class Command {
    public:
        virtual void execute() = 0;
        virtual ~Command() {}
    };
}