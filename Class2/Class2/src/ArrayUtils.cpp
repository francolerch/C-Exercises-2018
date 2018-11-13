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

	void mergeSortedArray(unsigned int array1[10], unsigned int array2[10], unsigned int array3[20])
	{
		int size = 20;
		bool sorted = false;

		for (int i = 0; i < 10; i++)
		{
			array3[i] = array1[i];
			array3[i + 10] = array2[i];
		}

		while (!sorted) {
			bool swap = false;

			for (int i = 0; i < size - 1; i++)
			{
				int temp;

				if (array3[i] > array3[i + 1])
				{
					temp = array3[i];
					array3[i] = array3[i + 1];
					array3[i + 1] = temp;
					swap = true;
				}
			}

			if (!swap)
			{
				sorted = true;
			}
		}
	};

	unsigned int getPrimeCount(unsigned int array[10])
	{
		unsigned int size = 10;
		unsigned int count = 0;

		for (unsigned int i = 0; i < size; ++i)
		{
			bool isPrime = true;

			for (unsigned int j = 2; j < array[i] / 2; j++)
			{

				if (array[i] % j == 0)
				{
					isPrime = false;
					break;
				}
			}

			if (isPrime == true)
			{
				count++;
			}
		}
		return count;
	};

	unsigned int getPowerOfTwoCount(unsigned int array[10])
	{
		unsigned int size = 10;
		unsigned int count = 0;

		for (unsigned int i = 0; i < size; ++i)
		{
			unsigned int number = array[i];

			if (((number != 0) && ((number &(number - 1)) == 0)))
			{
				count++;
			}
		}
		return count;
	}
};