#pragma once
#include "Command.h"

class RemoveCommand : public Command {
public:
    void execute() override;
};