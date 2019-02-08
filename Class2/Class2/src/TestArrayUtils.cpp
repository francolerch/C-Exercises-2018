#include "TestArrayUtils.h"

namespace cpp_class2_test {

	void testReverseArray()
	{
		int input[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

		cpp_class2::reverseArray(input);

		assert(input[0] == 10);
		assert(input[1] == 9);
		assert(input[2] == 8);
		assert(input[3] == 7);
		assert(input[4] == 6);
		assert(input[5] == 5);
		assert(input[6] == 4);
		assert(input[7] == 3);
		assert(input[8] == 2);
		assert(input[9] == 1);

		print("testReverseArray Test Passed");
	};

	void testTruncateArray()
	{
		float input[10] = { 1.5f, 2.3f, 3.002f, 4.55f, 5.5483f, 6.0f, 7.5877f, 8.999f, 9.778f, 10.55522315f };

		cpp_class2::truncateArray(input);

		assert(input[0] == 1.0f);
		assert(input[1] == 2.0f);
		assert(input[2] == 3.0f);
		assert(input[3] == 4.0f);
		assert(input[4] == 5.0f);
		assert(input[5] == 6.0f);
		assert(input[6] == 7.0f);
		assert(input[7] == 8.0f);
		assert(input[8] == 9.0f);
		assert(input[9] == 10.0f);

		print("testTruncateArray Test Passed");
	};

	void testXorArrays()
	{
		unsigned int input1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		unsigned int input2[10] = { 5, 6, 5, 4, 8, 10, 2, 1, 4, 9 };
		unsigned int input3[10];

		cpp_class2::xorArrays(input1, input2, input3);

		assert(input3[0] == 4);
		assert(input3[1] == 4);
		assert(input3[2] == 6);
		assert(input3[3] == 0);
		assert(input3[4] == 13);
		assert(input3[5] == 12);
		assert(input3[6] == 5);
		assert(input3[7] == 9);
		assert(input3[8] == 13);
		assert(input3[9] == 3);

		print("testXorArrays Test Passed");
	};

	void testMultiplyArrays()
	{
		float input1[10] = { 1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f, 9.0f, 10.0f };
		float input2[10] = { 5.0f, 6.0f, 5.0f, 4.0f, 8.0f, 10.0f, 2.0f, 1.0f, 4.0f, 9.0f };
		double input3[10];

		cpp_class2::multiplyArrays(input1, input2, input3);

		assert(input3[0] == 5);
		assert(input3[1] == 12);
		assert(input3[2] == 15);
		assert(input3[3] == 16);
		assert(input3[4] == 40);
		assert(input3[5] == 60);
		assert(input3[6] == 14);
		assert(input3[7] == 8);
		assert(input3[8] == 36);
		assert(input3[9] == 90);

		print("testMultiplyArrays Test Passed");
	};

	void testMergeSortedArray()
	{
		unsigned int input1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		unsigned int input2[10] = { 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
		unsigned int input3[20];

		cpp_class2::mergeSortedArray(input1, input2, input3);

		for (int i = 0; i < 9; i++)
		{
			assert(input1[i] < input1[i + 1]);
			assert(input2[i] < input2[i + 1]);
		}

		for (int i = 0; i < 19; i++)
		{
			assert(input3[i] < input3[i + 1]);
		}

		print("testMergeSortedArray Test Passed");
	};

	void testGetPrimeCount()
	{
		unsigned int input[10] = { 2, 15, 17, 3, 10, 90, 103, 125, 151, 127};

		assert(cpp_class2::getPrimeCount(input) == 6);

		print("testGetPrimeCount Test Passed");
	};

	void testGetPowerOfTwoCount()
	{
		unsigned int input[10] = { 2, 15, 128, 3, 10, 8, 103, 125, 64, 127 };

		assert(cpp_class2::getPowerOfTwoCount(input) == 4);

		print("testGetPowerOfTwoCount Test Passed");
	};
}