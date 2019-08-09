#include "TestArcher.h"
#include "Archer.h"
#include <assert.h>
#include <iostream>

namespace cpp_class10_test {

	using namespace cpp_class10;

	void TestArcher::runTests() const
	{
		std::cout << std::endl;
		std::cout << "TestArcher Tests:" << std::endl;
		std::cout << std::endl;

		TestConstructor();
		TestCopyConstructor();
		TestAssignOperator();
		TestIsDead();
		testGetDamage();
		testGetType();
	}

	void TestArcher::TestConstructor() const
	{
		Archer archer(100, 5, "Roberto");

		assert(archer.m_Health == 100);
		assert(archer.m_Attack == 5);
		assert(archer.m_Name == "Roberto");

		std::cout << "TestConstructor Test Passed!" << std::endl;
	}

	void TestArcher::TestCopyConstructor() const
	{
		Archer archer1(100, 5, "Roberto");
		Archer archer2(archer1);

		assert(archer2.m_Health == 100);
		assert(archer2.m_Attack == 5);
		assert(archer2.m_Name == "Roberto");

		std::cout << "TestCopyConstructor Test Passed!" << std::endl;
	}

	void TestArcher::TestAssignOperator() const
	{
		Archer archer1(100, 5, "Roberto");
		Archer archer2(50, 10, "Pablo");

		archer1 = archer2;

		assert(archer1.m_Health == 50);
		assert(archer1.m_Attack == 10);
		assert(archer1.m_Name == "Pablo");

		std::cout << "TestAssignOperator Test Passed!" << std::endl;
	}

	void TestArcher::TestIsDead() const
	{
		Archer archer(100, 5, "Roberto");
		assert(!archer.isDead());

		archer.setHealth(0);
		assert(archer.isDead());

		std::cout << "TestIsDead Test Passed!" << std::endl;
	}

	void TestArcher::testGetDamage() const
	{
		Archer archer(100, 10, "Roberto");

		int damage = archer.getDamage();

		assert(damage > 0 && damage < 11);

		std::cout << "testGetDamage Test Passed!" << std::endl;
	}

	void TestArcher::testGetType() const
	{
		Archer archer(100, 5, "Roberto");

		assert(archer.getType() == "Archer");

		std::cout << "testGetType Test Passed!" << std::endl;
	}
}