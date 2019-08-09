#include "TestUtils.h"
#include "Utils.h"
#include <assert.h>
#include <iostream>

namespace cpp_class6_test {

	void testSortArray()
	{
		int input1[10] = { 94, 42, 50, 95, 333, 65, 54, 456, 1, 1234 };
		float input2[10] = { 94.5f, 94.6f, 5.0f, 25.7f, 25.0f, 65.0f, 54.5f, 46.2f, 1.1f, 2.5f };

		cpp_class6::sortArray(input1, 10);

		for (short int i = 0; i < 9; i++)
		{
			assert(input1[i] < input1[i + 1]);
		}

		cpp_class6::sortArray(input2, 10);

		for (short int i = 0; i < 9; i++)
		{
			assert(input1[i] < input1[i + 1]);
		}

		std::cout << "testSortArray Test Passed" << std::endl;
	}

	void testRemoveDuplicates() 
	{
		char inputChar[] = "aaabcc";
		float inputFloat[5] = { 5.5f, 2.0f, 2.0f, 6.5f, 5.5f };

		char* test1 = cpp_class6::removeDuplicates(inputChar, 7);

		assert(sizeof(test1) == 3);

		

		std::cout << "testRemoveDuplicates Test Passed" << std::endl;
	}
}
