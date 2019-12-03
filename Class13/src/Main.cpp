#include "TestStack.h"
#include "TestQueue.h"
#include "TestContainer.h"
#include "TestBimap.h"

#include <iostream>

int main() 
{
	cpp_class13_test::TestContainer tc;
	cpp_class13_test::TestStack ts;
	cpp_class13_test::TestQueue tq;
	cpp_class13_test::TestBimap tb;

	tc.runTests();
	ts.runTests();
	tq.runTests();
	tb.runTests();

	std::cin.get();
	return 0;
}