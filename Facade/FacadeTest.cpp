#include "FacadeTest.hpp"

void testFacade() {
    // Using the ComputerFacade to start and shutdown the computer
    ComputerFacade computer;

    std::cout << "Starting the computer..." << std::endl;
    computer.start();

    std::cout << "\nShutting down the computer..." << std::endl;
    computer.shutdown();
}