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
			array[i] = (float)(int)array[i];
		}
	};
};