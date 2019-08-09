#include "TestDruid.h"
#include "Druid.h"
#include <assert.h>
#include <iostream>

namespace cpp_class10_test {

	using namespace cpp_class10;

	void TestDruid::runTests() const
	{
		std::cout << std::endl;
		std::cout << "TestDruid Tests:" << std::endl;
		std::cout << std::endl;

		TestConstructor();
		TestCopyConstructor();
		TestAssignOperator();
		TestIsDead();
		testGetDamage();
		testGetType();
	}

	void TestDruid::TestConstructor() const
	{
		Druid druid(100, 5, "Roberto");

		assert(druid.m_Health == 100);
		assert(druid.m_Attack == 5);
		assert(druid.m_Name == "Roberto");

		std::cout << "TestConstructor Test Passed!" << std::endl;
	}

	void TestDruid::TestCopyConstructor() const
	{
		Druid druid1(100, 5, "Roberto");
		Druid druid2(druid1);

		assert(druid2.m_Health == 100);
		assert(druid2.m_Attack == 5);
		assert(druid2.m_Name == "Roberto");

		std::cout << "TestCopyConstructor Test Passed!" << std::endl;
	}

	void TestDruid::TestAssignOperator() const
	{
		Druid druid1(100, 5, "Roberto");
		Druid druid2(50, 10, "Pablo");

		druid1 = druid2;

		assert(druid1.m_Health == 50);
		assert(druid1.m_Attack == 10);
		assert(druid1.m_Name == "Pablo");

		std::cout << "TestAssignOperator Test Passed!" << std::endl;
	}

	void TestDruid::TestIsDead() const
	{
		Druid druid(100, 5, "Roberto");
		assert(!druid.isDead());

		druid.setHealth(0);
		assert(druid.isDead());

		std::cout << "TestIsDead Test Passed!" << std::endl;
	}

	void TestDruid::testGetDamage() const
	{
		Druid druid(100, 10, "Roberto");

		int damage = druid.getDamage();

		assert(damage > 0 && damage < 11);

		std::cout << "testGetDamage Test Passed!" << std::endl;
	}

	void TestDruid::testGetType() const
	{
		Druid druid(100, 5, "Roberto");

		assert(druid.getType() == "Druid");

		std::cout << "testGetType Test Passed!" << std::endl;
	}
}