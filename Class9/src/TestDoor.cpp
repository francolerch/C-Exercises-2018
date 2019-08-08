#include "TestDoor.h"
#include "Door.h"
#include <iostream>
#include <assert.h>

namespace cpp_class9_test {

	using namespace cpp_class9;

	void TestDoor::RunTests()
	{
		std::cout << std::endl;
		std::cout << "TestDoor Tests:" << std::endl;

		TestConstructor();
		TestCopyConstructor();
		TestAssignOperator();
		TestGetMaterial();
	}

	void TestDoor::TestConstructor()
	{
		Door door1(10, 5, Door::Material::WOOD);

		assert(door1.m_Height == 10);
		assert(door1.m_Width == 5);
		assert(door1.m_Material == Door::Material::WOOD);

		std::cout << "TestConstructor Test Passed" << std::endl;
	}

	void TestDoor::TestCopyConstructor()
	{
		Door door1(10, 5, Door::Material::WOOD);

		Door door2(door1);

		assert(door2.m_Height == 10);
		assert(door2.m_Width == 5);
		assert(door2.m_Material == Door::Material::WOOD);

		std::cout << "TestCopyConstructor Test Passed" << std::endl;
	}

	void TestDoor::TestAssignOperator()
	{
		Door door1(10, 5, Door::Material::WOOD);
		Door door2(3, 2, Door::Material::METAL);
		
		door1 = door2;

		assert(door1.m_Height == 3);
		assert(door1.m_Width == 2);
		assert(door1.m_Material == Door::Material::METAL);

		std::cout << "TestAssignOperator Test Passed" << std::endl;
	}

	void TestDoor::TestGetMaterial()
	{
		Door door1(10, 5, Door::Material::GLASS);

		assert(door1.getMaterial() == Door::Material::GLASS);

		std::cout << "TestGetMaterial Test Passed" << std::endl;
	}
}