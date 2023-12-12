#pragma once
namespace commandPattern {
    class Command {
    public:
        virtual ~Command() = default;
        virtual void execute() = 0;
    };
}
