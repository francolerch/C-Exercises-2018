#include "ArrayUtils.h"

namespace cpp_class2 {
	void reverseArray(int array[10])
	{
		int size = 10;
		int temp;

		for (int i = 0; i < size / 2; i++)
		{
			temp = array[i];
			array[i] = array[size - 1 - i];
			array[size - 1 - i] = temp;
		}
	};

	void truncateArray(float array[10])
	{
		int size = 10;

		for (int i = 0; i < size; i++)
		{
			array[i] = static_cast<float>(static_cast<int>(array[i]));
		}
	}
	void xorArrays(unsigned int array1[10], unsigned int array2[10], unsigned int arrayToReturn[10])
	{
		int size = 10;

		for (int i = 0; i < size; i++)
		{
			arrayToReturn[i] = array1[i] ^ array2[i];
		}
	};

	void multiplyArrays(float array1[10], float array2[10], double arrayToReturn[10])
	{
		int size = 10;

		for (int i = 0; i < size; i++)
		{
			arrayToReturn[i] = static_cast<double>(array1[i] * array2[i]);
		}
	};
};