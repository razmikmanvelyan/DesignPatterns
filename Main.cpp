// Design Patterns.cpp : Defines the entry point for the application.
//

#include "Singleton/SingletonTest.hpp"
#include "Builder/BuilderTest.hpp"
#include "Prototype/PrototypeTest.hpp"
#include "Factory/FactoryTest.hpp"
#include "Abstract Factory/AbstractFactoryTest.hpp"
#include "Adapter/AdapterTest.hpp"
#include "Composite/CompositeTest.hpp"
#include "Decorator/DecoratorTest.hpp"
#include "Facade/FacadeTest.hpp"
#include "Chain Responsibility/ChainResponsibilityTest.hpp"
#include "State/StateTest.hpp"
#include "Command/CommandTest.hpp"
#include "Bridge/BridgeTest.hpp"
#include "Observer/ObserverTest.hpp"

using namespace std;

int main()
{
	// cout << testIsSingleInstance() << endl;
	// testBuilder();
	// testPrototype();
	// testFactory();
	// testAbstractFactory();
	// testAdapter();
	// testComposite();
	// testDecorator();
	// testFacade();
	// testChainResponsibility();
	// testState();
	// testCommand();
	// testBridge();
	testObserver();
	return 0;
}
