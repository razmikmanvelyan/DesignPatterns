#pragma once
#include "Command.hpp"

class RemoveCommand : public Command {
public:
    void execute() override;
};