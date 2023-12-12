#pragma once

#include "State.hpp" 
#include "Context.hpp" 
#include "ConcreteStateB.hpp"

class ConcreteStateA : public State {
public:
    void handle() override;

    void changeState(Context&) override;
};
