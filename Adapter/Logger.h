#include "ILogger.h"

class Logger : public ILogger {
public:
    void info(const std::string& message) const override;

    void error(const std::string& message, int level) const override;
};