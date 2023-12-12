#include "ChainResponsibilityTest.hpp"

void testChainResponsibility() {
    // Create instances of concrete loggers
    std::shared_ptr<chainResposiblity::Logger> infoLogger = std::make_shared<chainResposiblity::InfoLogger>(1);
    std::shared_ptr<chainResposiblity::Logger> warningLogger = std::make_shared<chainResposiblity::WarningLogger>(2);
    std::shared_ptr<chainResposiblity::Logger> errorLogger = std::make_shared<chainResposiblity::ErrorLogger>(3);

    // Set up the chain of responsibility
    infoLogger->setSuccessor(warningLogger);
    warningLogger->setSuccessor(errorLogger);

    // Log messages with different levels
    infoLogger->log(1, "This is an information message.");
    infoLogger->log(2, "This is a warning message.");
    infoLogger->log(3, "This is an error message.");

}