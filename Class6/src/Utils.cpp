#include "Utils.h"

namespace cpp_class6 {

	void sortArray(float* arr, const unsigned int size)
	{
		bool sorted = false;

		while (!sorted) {
			bool swap = false;

			for (unsigned int i = 0; i < size - 1; i++)
			{

				if (arr[i] > arr[i + 1])
				{
					float temp = arr[i];
					arr[i] = arr[i + 1];
					arr[i + 1] = temp;
					swap = true;
				}
			}

			if (!swap)
			{
				sorted = true;
			}
		}
	}

	void sortArray(int* arr, const unsigned int size)
	{
		bool sorted = false;

		while (!sorted) {
			bool swap = false;

			for (unsigned int  i = 0; i < size - 1; i++)
			{

				if (arr[i] > arr[i + 1])
				{
					int temp = arr[i];
					arr[i] = arr[i + 1];
					arr[i + 1] = temp;
					swap = true;
				}
			}

			if (!swap)
			{
				sorted = true;
			}
		}
	}
	char* removeDuplicates(const char* arr, const unsigned int size)
	{
		char* placeholderArr = new char[size];
		unsigned int lastIndex = 0;

		for (unsigned int i = 0; i < size - 1; i++)
		{
			for (unsigned int j = i + 1; j < size; j++)
			{
				if (arr[i] == arr[j])
				{
					placeholderArr[lastIndex++] = arr[i];
					break;
				}
			}
		}

		char* arrToReturn = new char[lastIndex];
		
		for (unsigned int i = 0; i < lastIndex; i++)
		{
			arrToReturn[i] = placeholderArr[i];
		}

		delete[] placeholderArr;

		return arrToReturn;
	}

	float* removeDuplicates(const float* arr, const unsigned int size)
	{
		float* arrToReturn = new float[size];
		unsigned int lastIndex = 0;

		for (unsigned int i = 0; i < size - 1; i++)
		{
			for (unsigned int j = i + 1; j < size; j++)
			{
				if (arr[i] != arr[j])
				{
					arrToReturn[lastIndex++] = arr[i];

				}
			}
		}

		return arrToReturn;
	}
}
