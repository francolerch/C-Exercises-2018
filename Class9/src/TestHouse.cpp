#include "TestHouse.h"
#include "House.h"
#include "Window.h"
#include "Door.h"
#include <iostream>
#include <assert.h>

namespace  cpp_class9_test {

	using namespace cpp_class9;

	void TestHouse::RunTests()
	{
		std::cout << std::endl;
		std::cout << "TestHouse Tests:" << std::endl;

		TestConstructor();
		TestCopyConstructor();
		TestAssignOperator();
		TestLeftShiftOperator();
		TestGetDoorArea();
		TestGetTotalWindowArea();
	}

	void TestHouse::TestConstructor()
	{
		Door door(2, 3, Door::Material::WOOD);
		Window window1(10, 5, Window::Style::FENG_SHUI);
		Window window2(2, 6, Window::Style::CHINESE);
		Window window3(3, 3, Window::Style::MODERN);
		Window window4(5, 5, Window::Style::FENG_SHUI);

		House house(window1, window2, window3, window4, door);

		assert(house.m_Door.getHeight() == 2);
		assert(house.m_Door.getWidth() == 3);

		assert(house.m_Window1.getHeight() == 10);
		assert(house.m_Window1.getWidth() == 5);
		assert(house.m_Window1.getStyle() == Window::Style::FENG_SHUI);

		assert(house.m_Window2.getHeight() == 2);
		assert(house.m_Window2.getWidth() == 6);
		assert(house.m_Window2.getStyle() == Window::Style::CHINESE);

		assert(house.m_Window3.getHeight() == 3);
		assert(house.m_Window3.getWidth() == 3);
		assert(house.m_Window3.getStyle() == Window::Style::MODERN);

		assert(house.m_Window4.getHeight() == 5);
		assert(house.m_Window4.getWidth() == 5);
		assert(house.m_Window4.getStyle() == Window::Style::FENG_SHUI);


		std::cout << "TestConstructor Test Passed" << std::endl;
	}

	void TestHouse::TestCopyConstructor()
	{
		Door door1(2, 3, Door::Material::WOOD);
		Window window1(10, 5, Window::Style::FENG_SHUI);
		Window window2(2, 6, Window::Style::CHINESE);
		Window window3(3, 3, Window::Style::MODERN);
		Window window4(5, 5, Window::Style::FENG_SHUI);

		House house1(window1, window2, window3, window4, door1);

		House house2(house1);

		assert(house2.m_Door.getHeight() == 2);
		assert(house2.m_Door.getWidth() == 3);

		assert(house2.m_Window1.getHeight() == 10);
		assert(house2.m_Window1.getWidth() == 5);
		assert(house2.m_Window1.getStyle() == Window::Style::FENG_SHUI);

		assert(house2.m_Window2.getHeight() == 2);
		assert(house2.m_Window2.getWidth() == 6);
		assert(house2.m_Window2.getStyle() == Window::Style::CHINESE);

		assert(house2.m_Window3.getHeight() == 3);
		assert(house2.m_Window3.getWidth() == 3);
		assert(house2.m_Window3.getStyle() == Window::Style::MODERN);

		assert(house2.m_Window4.getHeight() == 5);
		assert(house2.m_Window4.getWidth() == 5);
		assert(house2.m_Window4.getStyle() == Window::Style::FENG_SHUI);

		std::cout << "TestCopyConstructor Test Passed" << std::endl;

	}

	void TestHouse::TestAssignOperator()
	{
		Door door1(2, 3, Door::Material::WOOD);
		Window window1(10, 5, Window::Style::FENG_SHUI);
		Window window2(2, 6, Window::Style::CHINESE);
		Window window3(3, 3, Window::Style::MODERN);
		Window window4(5, 5, Window::Style::FENG_SHUI);

		Door door2(2, 1, Door::Material::WOOD);
		Window window5(12, 3, Window::Style::CHINESE);
		Window window6(4, 2, Window::Style::FENG_SHUI);
		Window window7(5, 3, Window::Style::MODERN);
		Window window8(5, 6, Window::Style::FENG_SHUI);

		House house1(window1, window2, window3, window4, door1);
		House house2(window5, window6, window7, window8, door2);

		house1 = house2;

		assert(house1.m_Door.getHeight() == 2);
		assert(house1.m_Door.getWidth() == 1);

		assert(house1.m_Window1.getHeight() == 12);
		assert(house1.m_Window1.getWidth() == 3);
		assert(house1.m_Window1.getStyle() == Window::Style::CHINESE);

		assert(house1.m_Window2.getHeight() == 4);
		assert(house1.m_Window2.getWidth() == 2);
		assert(house1.m_Window2.getStyle() == Window::Style::FENG_SHUI);

		assert(house1.m_Window3.getHeight() == 5);
		assert(house1.m_Window3.getWidth() == 3);
		assert(house1.m_Window3.getStyle() == Window::Style::MODERN);

		assert(house1.m_Window4.getHeight() == 5);
		assert(house1.m_Window4.getWidth() == 6);
		assert(house1.m_Window4.getStyle() == Window::Style::FENG_SHUI);

		std::cout << "TestAssignOperator Test Passed" << std::endl;

	}

	void TestHouse::TestLeftShiftOperator()
	{
		Door door1(2, 3, Door::Material::WOOD);
		Window window1(10, 5, Window::Style::FENG_SHUI);
		Window window2(2, 6, Window::Style::CHINESE);
		Window window3(3, 3, Window::Style::MODERN);
		Window window4(5, 5, Window::Style::FENG_SHUI);

		House house(window1, window2, window3, window4, door1);

		std::cout << "TestLeftShiftOperator Test: " << std::endl;
		std::cout << house << std::endl;

		std::cout << "TestLeftShiftOperator Test Passed" << std::endl;
	}

	void TestHouse::TestGetDoorArea()
	{
		Door door1(2, 3, Door::Material::WOOD);
		Window window1(10, 5, Window::Style::FENG_SHUI);
		Window window2(2, 6, Window::Style::CHINESE);
		Window window3(3, 3, Window::Style::MODERN);
		Window window4(5, 5, Window::Style::FENG_SHUI);

		House house(window1, window2, window3, window4, door1);

		assert(house.getDoorArea() == 6);

		std::cout << "TestGetDoorArea Test Passed" << std::endl;
	}

	void TestHouse::TestGetTotalWindowArea()
	{
		Door door1(2, 3, Door::Material::WOOD);
		Window window1(10, 5, Window::Style::FENG_SHUI);
		Window window2(2, 6, Window::Style::CHINESE);
		Window window3(3, 3, Window::Style::MODERN);
		Window window4(5, 5, Window::Style::FENG_SHUI);

		House house(window1, window2, window3, window4, door1);

		assert(house.getTotalWindowArea() == 96);

		std::cout << "TestGetTotalWindowArea Test Passed" << std::endl;
	}
}