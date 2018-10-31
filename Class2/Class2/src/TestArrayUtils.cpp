#include "TestArrayUtils.h"

namespace cpp_class2_test {

	void testReverseArray()
	{
		int input[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		int output[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

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

}