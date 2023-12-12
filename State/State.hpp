#pragma once

#include <iostream>
#include <memory>

class Context;

class State {
public:
    virtual ~State() = default;
    virtual void handle() = 0;
    virtual void changeState(Context&) = 0;
};