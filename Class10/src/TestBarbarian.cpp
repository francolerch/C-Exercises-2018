#include "TestBarbarian.h"
#include "Barbarian.h"
#include <assert.h>
#include <iostream>

namespace cpp_class10_test {

	using namespace cpp_class10;

	void TestBarbarian::runTests() const
	{
		std::cout << std::endl;
		std::cout << "TestBarbarian Tests:" << std::endl;
		std::cout << std::endl;

		TestConstructor();
		TestCopyConstructor();
		TestAssignOperator();
		TestIsDead();
		testGetDamage();
		testGetType();
	}

	void TestBarbarian::TestConstructor() const
	{
		Barbarian barbarian(100, 5, "Roberto");

		assert(barbarian.m_Health == 100);
		assert(barbarian.m_Attack == 5);
		assert(barbarian.m_Name == "Roberto");

		std::cout << "TestConstructor Test Passed!" << std::endl;
	}

	void TestBarbarian::TestCopyConstructor() const
	{
		Barbarian barbarian1(100, 5, "Roberto");
		Barbarian barbarian2(barbarian1);

		assert(barbarian2.m_Health == 100);
		assert(barbarian2.m_Attack == 5);
		assert(barbarian2.m_Name == "Roberto");

		std::cout << "TestCopyConstructor Test Passed!" << std::endl;
	}

	void TestBarbarian::TestAssignOperator() const
	{
		Barbarian barbarian1(100, 5, "Roberto");
		Barbarian barbarian2(50, 10, "Pablo");

		barbarian1 = barbarian2;

		assert(barbarian1.m_Health == 50);
		assert(barbarian1.m_Attack == 10);
		assert(barbarian1.m_Name == "Pablo");

		std::cout << "TestAssignOperator Test Passed!" << std::endl;
	}

	void TestBarbarian::TestIsDead() const
	{
		Barbarian barbarian(100, 5, "Roberto");
		assert(!barbarian.isDead());

		barbarian.setHealth(0);
		assert(barbarian.isDead());

		std::cout << "TestIsDead Test Passed!" << std::endl;
	}

	void TestBarbarian::testGetDamage() const
	{
		Barbarian barbarian(100, 5, "Roberto");

		int damage = barbarian.getDamage();

		assert(damage > 0 && damage < 6);

		std::cout << "testGetDamage Test Passed!" << std::endl;
	}

	void TestBarbarian::testGetType() const
	{
		Barbarian barbarian(100, 5, "Roberto");

		assert(barbarian.getType() == "Barbarian");

		std::cout << "testGetType Test Passed!" << std::endl;
	}
}