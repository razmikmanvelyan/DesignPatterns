#include "ThirdPartyLogger.h"

void ThirdPartyLogger::logInfo(const std::string& message) const {
        std::cout << "Third-party logger - Info: " << message << std::endl;
}
void ThirdPartyLogger::logError(const std::string& message) const {
        std::cout << "Third-party logger - Error: " << message << std::endl;
}
void ThirdPartyLogger::logWarning(const std::string& message) const {
        std::cout << "Third-party logger - Warning: " << message << std::endl;
}