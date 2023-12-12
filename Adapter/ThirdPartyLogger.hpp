#include <iostream>

class ThirdPartyLogger {
public:
    void logInfo(const std::string& message) const;
    void logError(const std::string& message) const;
    void logWarning(const std::string& message) const;
};