#pragma once
#include <memory>
#include "State.hpp"

// Context class
class Context {
public:
    Context(std::shared_ptr<State> state) : _state(std::move(state)) {}

    void changeState(std::shared_ptr<State>);
    void request();
private:
    std::shared_ptr<State> _state;
};