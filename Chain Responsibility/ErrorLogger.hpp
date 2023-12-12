#pragma once

#include "Logger.hpp"

namespace chainResposiblity{
    class ErrorLogger : public Logger {
    public:
        ErrorLogger(int level) : Logger(level) {}

        void logMessage(int, const std::string&) override;
    };
}