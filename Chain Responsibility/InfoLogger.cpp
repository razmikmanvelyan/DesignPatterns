#include "InfoLogger.hpp"

void chainResposiblity::InfoLogger::logMessage(int level, const std::string& message) {
    if (level <= _logLevel) {
        std::cout << "INFO: " << message << std::endl;
    }
}