#include <assert.h>
#include "TestUtils.h"
#include "Utils.h"
#include <iostream>

namespace cpp_class3_test 
{
	void testToggleCharCase()
	{
		const unsigned int size = 10;
		char arrayInput[size] = { 'a', 'B', 'c', 'd', '3', 'F', '8', '&', 'i', 'J' };
		char arrayTest[size] = { 'A', 'b', 'C', 'D', '3', 'f', '8', '&', 'I', 'j' };

		cpp_class3::toggleCharCase(arrayInput, size);

		for (unsigned int i = 0; i < size; i++)
		{
			assert(arrayInput[i] == arrayTest[i]);
		}

		std::cout << "testToggleCharCase Test Passed" << std::endl;
	}

}
