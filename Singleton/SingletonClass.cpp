#include "SingletonClass.h"

SingletonClass& SingletonClass::getInstance() {
	static SingletonClass instance;
	return instance;
}