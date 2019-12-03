#include "TestBimap.h"
#include "Bimap.h"

#include <iostream>
#include <string>
#include <assert.h>

namespace cpp_class13_test {
	using namespace cpp_class13;

	void TestBimap::runTests() const
	{
		std::cout << std::endl;
		std::cout << "TestBimap Tests:" << std::endl;
		std::cout << std::endl;

		TestInsert();
		TestSearchKey();
		TestSearchValue();
		TestUpdateKey();
		TestUpdateValue();
		TestDeleteKey();
		TestDeleteValue();
		TestClear();
	}

	void TestBimap::TestInsert() const
	{
		Bimap<std::string, int> b;

		b.insert("first", 1);
		b.insert("second", 2);

		assert(b.m_Struct["first"] == 1);
		assert(b.m_Struct["second"] == 2);

		std::cout << "TestInsert Test Passed!" << std::endl;
	}

	void TestBimap::TestSearchKey() const
	{
		Bimap<std::string, int> b;

		b.insert("first", 1);
		b.insert("second", 2);

		assert(b.searchKey("first"));
		assert(b.searchKey("second"));
		assert(!b.searchKey("third"));

		std::cout << "TestSearchKey Test Passed!" << std::endl;
	}

	void TestBimap::TestSearchValue() const
	{
		Bimap<std::string, int> b;

		b.insert("first", 1);
		b.insert("second", 2);

		assert(b.searchValue(1));
		assert(b.searchValue(2));
		assert(!b.searchValue(3));

		std::cout << "TestSearchValue Test Passed!" << std::endl;
	}

	void TestBimap::TestUpdateKey() const
	{
		Bimap<std::string, int> b;

		b.insert("first", 1);
		b.insert("second", 2);

		assert(b.updateKey("first", "FIRST"));
		assert(b.m_Struct["FIRST"] == 1);
		assert(!b.updateKey("first", "FIRST"));

		std::cout << "TestUpdateKey Test Passed!" << std::endl;
	}

	void TestBimap::TestUpdateValue() const
	{
		Bimap<std::string, int> b;

		b.insert("first", 1);
		b.insert("second", 2);

		assert(b.updateValue(1, 3));
		assert(b.m_Struct["first"] == 3);
		assert(!b.updateValue(1, 3));

		std::cout << "TestUpdateValue Test Passed!" << std::endl;
	}

	void TestBimap::TestDeleteKey() const
	{
		Bimap<std::string, int> b;

		b.insert("first", 1);
		b.insert("second", 2);

		assert(b.deleteKey("first"));
		assert(!b.searchKey("first"));

		std::cout << "TestDeleteKey Test Passed!" << std::endl;
	}

	void TestBimap::TestDeleteValue() const
	{
		Bimap<std::string, int> b;

		b.insert("first", 1);
		b.insert("second", 2);

		assert(b.deleteValue(1));
		assert(!b.searchValue(1));

		std::cout << "TestDeleteValue Test Passed!" << std::endl;
	}

	void TestBimap::TestClear() const
	{
		Bimap<std::string, int> b;

		b.insert("first", 1);
		b.insert("second", 2);
		b.insert("third", 3);

		b.clear();

		assert(b.m_Struct.empty());
		assert(!b.searchValue(1));
		assert(!b.searchValue(2));
		assert(!b.searchValue(3));

		std::cout << "TestClear Test Passed!" << std::endl;
	}
}