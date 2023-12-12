#include "ConcreteStateA.hpp"

void ConcreteStateA::handle(){
    std::cout << "State A handled\n";
}

void ConcreteStateA::changeState(Context& context) {
    context.changeState(std::make_unique<ConcreteStateB>());
}