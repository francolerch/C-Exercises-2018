#include "TestWindow.h"
#include "Window.h"
#include <iostream>
#include <assert.h>

namespace cpp_class9_test {

	using namespace cpp_class9;

	void TestWindow::RunTests()
	{
		std::cout << std::endl;
		std::cout << "TestWindow Tests:" << std::endl;

		TestConstructor();
		TestCopyConstructor();
		TestAssignOperator();
		TestGetStyle();
	}

	void TestWindow::TestConstructor()
	{
		Window window1(10, 5, Window::Style::FENG_SHUI);

		assert(window1.m_Height == 10);
		assert(window1.m_Width == 5);
		assert(window1.m_Style == Window::Style::FENG_SHUI);

		std::cout << "TestConstructor Test Passed" << std::endl;
	}

	void TestWindow::TestCopyConstructor()
	{
		Window window1(10, 5, Window::Style::FENG_SHUI);

		Window window2(window1);

		assert(window2.m_Height == 10);
		assert(window2.m_Width == 5);
		assert(window2.m_Style == Window::Style::FENG_SHUI);

		std::cout << "TestCopyConstructor Test Passed" << std::endl;
	}

	void TestWindow::TestAssignOperator()
	{
		Window window1(10, 5, Window::Style::FENG_SHUI);
		Window window2(3, 2, Window::Style::CHINESE);

		window1 = window2;

		assert(window1.m_Height == 3);
		assert(window1.m_Width == 2);
		assert(window1.m_Style == Window::Style::CHINESE);

		std::cout << "TestAssignOperator Test Passed" << std::endl;
	}

	void TestWindow::TestGetStyle()
	{
		Window window1(10, 5, Window::Style::CHINESE);

		assert(window1.getStyle() == Window::Style::CHINESE);

		std::cout << "TestGetMaterial Test Passed" << std::endl;
	}
}