#pragma once

#include <iostream>
#include <string>
#include <memory>

namespace chainResposiblity {
    class Logger {
    public:
        Logger(int level) : _successor(nullptr), _logLevel(level) {}

        void setSuccessor(std::shared_ptr<Logger>);

        virtual void logMessage(int, const std::string&) = 0;

        void log(int, const std::string&);

    protected:
        std::shared_ptr<Logger> _successor;
        int _logLevel;

    };
}