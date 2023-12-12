#include "Logger.hpp"

void chainResposiblity::Logger::setSuccessor(std::shared_ptr<Logger> successor) {
    _successor = std::move(successor);
}
void chainResposiblity::Logger::log(int level, const std::string& message) {
    if (level <= _logLevel) {
        logMessage(level, message);
    } else if (_successor != nullptr) {
        _successor->log(level, message);
    }
}