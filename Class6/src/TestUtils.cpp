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
		float inputFloat[] = { 4.5f, 2.0f, 2.0f, 6.5f, 5.5f };
		unsigned int sizeDuplicates = 0;

		char* testChar = cpp_class6::removeDuplicates(inputChar, 6, &sizeDuplicates);

		assert(testChar[0] == 'a');
		assert(testChar[1] == 'b');
		assert(testChar[2] == 'c');
		assert(sizeDuplicates == 3);
		
		float* testFloat = cpp_class6::removeDuplicates(inputFloat, 5, &sizeDuplicates);

		assert(testFloat[0] == 4.5f);
		assert(testFloat[1] == 2.0f);
		assert(testFloat[2] == 6.5f);
		assert(testFloat[3] == 5.5f);
		assert(sizeDuplicates == 4);

		std::cout << "testRemoveDuplicates Test Passed" << std::endl;
	}

	void testRotateToLeft()
	{
		unsigned int input[] = { 0,1,2,3 };

		cpp_class6::rotateToLeft(input, 4, 1);

		assert(input[0] == 1);
		assert(input[1] == 2);
		assert(input[2] == 3);
		assert(input[3] == 0);

		cpp_class6::rotateToLeft(input, 4, 2);

		assert(input[0] == 3);
		assert(input[1] == 0);
		assert(input[2] == 1);
		assert(input[3] == 2);

		std::cout << "testRotateToLeft Test Passed" << std::endl;

	}
}
