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

	void testAreConsecutives()
	{
		const unsigned int size1 = 3;
		const unsigned int size2 = 5;

		int inputArray1[] = { 1, 2, 3 };
		int inputArray2[] = { 4, 5, 6, 7, 8 };
		int inputArray3[] = { 1, 2, 4 };
		int inputArray4[] = { 4, 5, 2, 7, 8 };
		int inputArray5[] = { 1, 2, 3 };
		int inputArray6[] = { 5, 6, 7, 8, 9 };

		bool results = cpp_class3::areConsecutives(inputArray1, inputArray2, size1, size2);

		assert(results);

		results = cpp_class3::areConsecutives(inputArray3, inputArray4, size1, size2);

		assert(results == false);
		
		results = cpp_class3::areConsecutives(inputArray5, inputArray6, size1, size2);

		assert(results == false);

		std::cout << "testAreConsecutives Test Passed" << std::endl;
	}

	void testIsReverseOf()
	{
		const unsigned int size1 = 3;
		const unsigned int size2 = 4;

		short int inputArray1[] = { 1, 2, 3 };
		short int inputArray2[] = { 3, 2, 1};
		short int inputArray3[] = { 1, 2, 4 };
		short int inputArray4[] = { 4, 2, 1, 0 };
		short int inputArray5[] = { 1, 2, 3 };

		bool results = cpp_class3::isReverseOf(inputArray1, inputArray2, size1, size1);

		assert(results);

		results = cpp_class3::isReverseOf(inputArray3, inputArray4, size1, size2);

		assert(results == false);

		results = cpp_class3::isReverseOf(inputArray5, inputArray5, size1, size1);

		assert(results == false);

		std::cout << "testIsReverseOf Test Passed" << std::endl;
	}

	void testAreThereDuplicates()
	{
		const unsigned int size = 3;

		int inputArray1[] = { 1, 2, 3 };
		int inputArray2[] = { 1, 2, 2 };

		bool results = cpp_class3::areThereDuplicates(inputArray1, size);

		assert(results == false);

		results = cpp_class3::areThereDuplicates(inputArray2, size);

		assert(results);

		std::cout << "testAreThereDuplicates Test Passed" << std::endl;
	}
}
