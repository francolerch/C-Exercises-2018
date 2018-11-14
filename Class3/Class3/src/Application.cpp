#include "Utils.h"
#include "TestUtils.h"
#include <iostream>

int main()
{
	cpp_class3::printCharAray();
	cpp_class3::printIntAray();

	cpp_class3_test::testToggleCharCase();
	cpp_class3_test::testParitySort();
	cpp_class3_test::testAreConsecutives();
	cpp_class3_test::testIsReverseOf();

	std::cin.get();
	return 0;
};