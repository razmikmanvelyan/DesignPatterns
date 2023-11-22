#include "LoggerAdapter.h"

void LoggerAdapter::info(const std::string& message) const{
    _thirdPartyLogger->logInfo(message);
}

void LoggerAdapter::error(const std::string& message, int level) const{
    if(level == 0){
        _thirdPartyLogger->logError(message);
    }
    else if(level == 1){
        _thirdPartyLogger->logWarning(message);
    }
}