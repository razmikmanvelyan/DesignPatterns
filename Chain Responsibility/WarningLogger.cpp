#include "WarningLogger.hpp"

void chainResposiblity::WarningLogger::logMessage(int level, const std::string& message) {
    if (level <= _logLevel) {
        std::cout << "WARNING: " << message << std::endl;
    }
}