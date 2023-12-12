#include "RemoveCommandFactory.hpp"

std::shared_ptr<abstract_factory::Command> abstract_factory::RemoveCommandFactory::createCommand() {
	return std::make_shared<abstract_factory::RemoveCommand>();
}
