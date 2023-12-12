#include "Logger.hpp"

void Logger::info(const std::string& message) const {
    std::cout << "[INFO] " << message << std::endl;
}

void Logger::error(const std::string& message, int level) const {
    std::cout << "[ERROR] - Level " << level << " Message - " << message << std::endl;
}