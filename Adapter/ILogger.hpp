#include <iostream>

class ILogger {
public:
    virtual void info(const std::string& message) const = 0;
    virtual void error(const std::string& message, int level) const = 0;
};