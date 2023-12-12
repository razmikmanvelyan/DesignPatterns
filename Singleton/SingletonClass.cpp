#include "SingletonClass.hpp"

SingletonClass& SingletonClass::getInstance() {
	static SingletonClass instance;
	return instance;
}