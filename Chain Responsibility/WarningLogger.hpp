#pragma once

#include "Logger.hpp"

namespace chainResposiblity{
    class WarningLogger : public Logger {
    public:
        WarningLogger(int level) : Logger(level) {}

        void logMessage(int, const std::string&) override;
    };
}