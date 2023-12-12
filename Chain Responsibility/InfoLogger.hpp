#pragma once

#include "Logger.hpp"

namespace chainResposiblity{
    class InfoLogger : public Logger {
    public:
        InfoLogger(int level) : Logger(level) {}

        void logMessage(int, const std::string&) override;
    };
}