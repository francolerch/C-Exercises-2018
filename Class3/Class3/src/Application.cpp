#include "Utils.h"
#include "TestUtils.h"
#include <iostream>

int main()
{
	const unsigned int size = 10;
	char charArray[size];
	char* p_CharArray = charArray;
	int intArray[size];
	int* p_IntArray = intArray;

	cpp_class3::printCharAray(p_CharArray, size);
	cpp_class3::printIntAray(p_IntArray, size);

	cpp_class3_test::testToggleCharCase();
	cpp_class3_test::testParitySort();
	cpp_class3_test::testAreConsecutives();
	cpp_class3_test::testIsReverseOf();
	cpp_class3_test::testAreThereDuplicates();
	
	std::cin.get();
	return 0;
};