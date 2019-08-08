#include "TestRectangle.h"
#include "Rectangle.h"
#include <iostream>
#include <assert.h>

namespace cpp_class9_test {

	using namespace cpp_class9;

	void TestRectangle::RunTests()
	{
		std::cout << std::endl;
		std::cout << "TestRectangle Tests:" << std::endl;

		TestConstructor();
		TestCopyConstructor();
		TestAssignOperator();
		TestGetArea();
	}

	void TestRectangle::TestConstructor()
	{
		Rectangle rect1(10, 5);

		assert(rect1.m_Height == 10);
		assert(rect1.m_Width == 5);

		std::cout << "TestConstructor Test Passed" << std::endl;

	}

	void TestRectangle::TestCopyConstructor()
	{
		Rectangle rect1(12, 4);

		Rectangle rect2(rect1);

		assert(rect2.m_Height == 12);
		assert(rect2.m_Width == 4);

		std::cout << "TestCopyConstructor Test Passed" << std::endl;

	}

	void TestRectangle::TestAssignOperator()
	{
		Rectangle rect1(12, 4);
		Rectangle rect2(2, 2);

		rect1 = rect2;

		assert(rect1.m_Height == 2);
		assert(rect1.m_Width == 2);

		std::cout << "TestAssignOperator Test Passed" << std::endl;

	}

	void TestRectangle::TestGetArea()
	{
		Rectangle rect1(12, 4);

		assert(rect1.getArea() == 48);

		std::cout << "TestGetArea Test Passed" << std::endl;

	}
}
