#pragma once

namespace observerPattern {

    class Observer {
    public:
        virtual ~Observer() {}
        virtual void update(float) = 0;
    };
}