#include "SingletonTest.hpp"

bool testIsSingleInstance(){
	SingletonClass& singleton1 = SingletonClass::getInstance();
	SingletonClass& singleton2 = SingletonClass::getInstance();
	return &singleton1 == &singleton2;
}