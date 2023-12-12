#include "ErrorLogger.hpp"

void chainResposiblity::ErrorLogger::logMessage(int level, const std::string& message) {
    if (level <= _logLevel) {
        std::cout << "ERROR: " << message << std::endl;
    }
}
