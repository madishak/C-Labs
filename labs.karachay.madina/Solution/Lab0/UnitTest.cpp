#include <cppunit/ui/text/TestRunner.h>
#include "MyTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(MyTest);

int main()
{
	CppUnit::TextUi::TestRunner runner;
	CppUnit::TestFactoryRegistry &registry = CppUnit::TestFactoryRegistry::getRegistry();
	runner.addTest(registry.makeTest());
	runner.run();
	return 0;
}