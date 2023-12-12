#include "StateTest.hpp"

void testState() {
    Context context(std::make_shared<ConcreteStateA>());

    context.request();
    context.request();
    context.request(); 
}