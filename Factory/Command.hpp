#pragma once
#include <iostream>
#include <memory>

// Command interface
class Command {
public:
    virtual void execute() = 0;
    virtual ~Command() {}
};