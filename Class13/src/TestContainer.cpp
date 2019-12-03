#include "TestContainer.h"
#include "Container.h"

#include <iostream>
#include <vector>
#include <list>

namespace cpp_class13_test {
	using namespace cpp_class13;

	void TestContainer::runTests() const
	{
		std::cout << std::endl;
		std::cout << "TestContainer Tests:" << std::endl;
		std::cout << std::endl;

		testClear();
		testCount();
		testCountOf();
		testMax();
		testMin();
	}

	void TestContainer::testClear() const
	{
		Container<std::vector<int>> s;

		s.m_Struct.push_back(1);
		s.m_Struct.push_back(2);
		
		s.clear();

		assert(s.m_Struct.size() == 0);

		std::cout << "testClear Test Passed!" << std::endl;
	}

	void TestContainer::testCount() const
	{
		Container<std::list<int>> s;

		s.m_Struct.push_back(1);
		s.m_Struct.push_back(2);
		s.m_Struct.push_back(3);

		assert(s.count() == 3);

		std::cout << "testCount Test Passed!" << std::endl;
	}

	void TestContainer::testCountOf() const
	{
		Container<std::list<int>> s;

		s.m_Struct.push_back(1);
		s.m_Struct.push_back(2);
		s.m_Struct.push_back(2);
		s.m_Struct.push_back(3);
		s.m_Struct.push_back(2);


		assert(s.count(2) == 3);

		std::cout << "testCountOf Test Passed!" << std::endl;
	}

	void TestContainer::testMax() const
	{
		Container<std::list<int>> s;

		s.m_Struct.push_back(1);
		s.m_Struct.push_back(2);
		s.m_Struct.push_back(3);
		s.m_Struct.push_back(5);
		s.m_Struct.push_back(5);
		s.m_Struct.push_back(3);


		assert(s.max() == 5);

		std::cout << "testMax Test Passed!" << std::endl;
	}

	void TestContainer::testMin() const
	{
		Container<std::vector<int>> s;

		s.m_Struct.push_back(1);
		s.m_Struct.push_back(2);
		s.m_Struct.push_back(3);
		s.m_Struct.push_back(5);
		s.m_Struct.push_back(5);
		s.m_Struct.push_back(3);

		assert(s.min() == 1);

		std::cout << "testMin Test Passed!" << std::endl;
	}
}