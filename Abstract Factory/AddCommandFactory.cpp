#include "AddCommandFactory.hpp"

std::shared_ptr<abstract_factory::Command> abstract_factory::AddCommandFactory::createCommand() {
	return std::make_shared<AddCommand>();
}