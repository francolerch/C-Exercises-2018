#include "TestUtils.h"

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
		int evenCount = 0;
		int oddCount = 0;

		cpp_class3::paritySort(inputArray, size, &evenCount, &oddCount);

		for (unsigned int i = 0; i < size - 2; i++)
		{
			assert(inputArray[i] >= inputArray[i + 1]);
		}

		assert(evenCount == 7);
		assert(oddCount == 3);

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
