#include "TestUtils.h"
#include <iostream>
#include <time.h>

int main()
{
	//srand(time(NULL));

	cpp_class4_test::testRandomPrimeInteger();
	cpp_class4_test::testGetLanguageCreator();
	cpp_class4_test::testFindFirstOccurence();
	cpp_class4_test::testSortByType();
	std::cin.get();
	return 0;
};