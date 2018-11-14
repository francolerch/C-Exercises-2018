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

	void testParitySort()
	{
		const unsigned int size = 10;
		int inputArray[10] = { 5, 15, 20, 16, 2, 24, 74, 72, 10, 15 };
		int evenArrayTest[] = { 74, 72, 24, 20, 16, 10, 2 };
		int oddArrayTest[] = { 15, 15, 5 };

		
		int evenArray[7]; // I do this because I don't want to use std::vector to resize the array nor
		int oddArray[3];  // alloc manually every time a new index is needed. I think it should suffice for now.

		cpp_class3::paritySort(inputArray, size, evenArray, oddArray);

		for (unsigned int i = 0; i < 6; i++)
		{
			assert(evenArray[i] == evenArrayTest[i]);
		}

		for (unsigned int i = 0; i < 4; i++)
		{
			assert(oddArray[i] == oddArrayTest[i]);
		}

		std::cout << "testParitySort Test Passed" << std::endl;
	}

}
