#include "Utils.h"
#include "TestUtils.h"
#include <iostream>

int main()
{
	cpp_class3::printCharAray();
	cpp_class3::printIntAray();

	cpp_class3_test::testToggleCharCase();
	cpp_class3_test::testParitySort();

	std::cin.get();
	return 0;
};