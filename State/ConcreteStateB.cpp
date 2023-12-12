#include "ConcreteStateB.hpp"

void ConcreteStateB::handle(){
    std::cout << "State B handled\n";
}

void ConcreteStateB::changeState(Context& context) {
    context.changeState(std::make_unique<ConcreteStateA>());
}