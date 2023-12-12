#include "StartCarCommand.hpp"
#include "StopCarCommand.hpp"

namespace commandPattern {
    class CarRemote {
    public:
        void setStartCommand(std::shared_ptr<Command>);

        void setStopCommand(std::shared_ptr<Command>);

        void startCar();

        void stopCar();

    private:
        std::shared_ptr<Command> startCommand;
        std::shared_ptr<Command> stopCommand;
    };
}