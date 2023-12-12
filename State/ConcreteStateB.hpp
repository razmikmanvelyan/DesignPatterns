#pragma once

#include "State.hpp" 
#include "Context.hpp" 
#include "ConcreteStateA.hpp"

class ConcreteStateB : public State {
public:
    void handle() override;

    void changeState(Context&) override;
};
