#include "TestRectangle.h"
#include "TestDoor.h"
#include "TestWindow.h"
#include "TestHouse.h"
#include <iostream>

using namespace cpp_class9_test;

int main() {
	TestRectangle testRectangle;
	TestDoor testDoor;
	TestWindow testWindow;
	TestHouse testHouse;

	testRectangle.RunTests();
	testDoor.RunTests();
	testWindow.RunTests();
	testHouse.RunTests();

	std::cin.get();

	return 0;
}