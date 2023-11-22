// Design Patterns.cpp : Defines the entry point for the application.
//

#include "Singleton/SingletonTest.h"
#include "Builder/BuilderTest.h"
#include "Prototype/PrototypeTest.h"
#include "Factory/FactoryTest.h"
#include "Abstract Factory/AbstractFactoryTest.h"
#include "Adapter/AdapterTest.h"
#include "Composite/CompositeTest.h"

using namespace std;

int main()
{
	cout << testIsSingleInstance() << endl;
	testBuilder();
	testPrototype();
	testFactory();
	testAbstractFactory();
	testAdapter();
	testComposite();
	return 0;
}
