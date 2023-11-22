#pragma once
#include "AddCommand.h"
#include "RemoveCommand.h"

enum CommandType
{
    ADD,
    REMOVE
};

class CommandFactory {
public:
    static std::shared_ptr<Command> createCommand(const CommandType& commandType) {
        if (commandType == ADD) {
            return std::make_shared<AddCommand>();
        }
        else if (commandType == REMOVE) {
            return std::make_shared<RemoveCommand>();
        }
        else {
            return nullptr; // Handle unsupported command types
        }
    }
};
