#include "TestStack.h"
#include "Stack.h"

#include <iostream>
#include <assert.h>

namespace cpp_class13_test {
	using namespace cpp_class13;

	void TestStack::runTests() const
	{
		std::cout << std::endl;
		std::cout << "TestStack Tests:" << std::endl;
		std::cout << std::endl;

		testPush();
		testPop();
	}

	void TestStack::testPop() const
	{
		Stack<int> s;

		s.push(1);
		s.push(2);

		int test = s.pop();

		assert(s.count() == 1);
		assert(test == 2);

		std::cout << "testPop Test Passed!" << std::endl;
	}

	void TestStack::testPush() const
	{
		Stack<int> s;

		s.push(1);
		s.push(2);

		assert(s.count() == 2);
		assert(s.m_Struct[0] == 1);
		assert(s.m_Struct[1] == 2);

		std::cout << "testPush Test Passed!" << std::endl;
	}

}