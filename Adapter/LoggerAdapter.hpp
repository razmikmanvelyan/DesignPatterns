#include "Logger.hpp"
#include "ThirdPartyLogger.hpp"
#include <memory>

class LoggerAdapter : public ILogger {
public:
    LoggerAdapter(std::shared_ptr<ThirdPartyLogger> thirdPartyLogger) : _thirdPartyLogger(thirdPartyLogger) {}

    void info(const std::string& message) const override;

    void error(const std::string& message, int level) const override;

private:
    std::shared_ptr<ThirdPartyLogger> _thirdPartyLogger;
};