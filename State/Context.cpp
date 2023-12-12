#include "Context.hpp"

void Context::changeState(std::shared_ptr<State> newState) {
    _state = std::move(newState);
}

void Context::request() {
    _state->handle();
    _state->changeState(*this);
}