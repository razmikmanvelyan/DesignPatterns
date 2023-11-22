#include "AdapterTest.h"

void testAdapter() {
    std::shared_ptr<ThirdPartyLogger> thirdPartyLogger = std::make_shared<ThirdPartyLogger>();
    std::shared_ptr<ILogger> ourLogger = std::make_shared<Logger>();
    std::shared_ptr<ILogger> adapter = std::make_shared<LoggerAdapter>(thirdPartyLogger);

    adapter->info("Some Info");
    adapter->error("Some warning", 1);
    adapter->error("Some error", 0);

    ourLogger->info("Some Info");
    ourLogger->error("Some warning", 1);
    ourLogger->error("Some error", 0);
}