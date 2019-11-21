#include "Utils.h"
#include "cmath"
#include "limits"

namespace cpp_class6 {
	void sortArray(float* arr, const unsigned int size)
	{
		assert(arr != nullptr);

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
		assert(arr != nullptr);

		bool sorted = false;

		while (!sorted) {
			bool swap = false;

			for (unsigned int i = 0; i < size - 1; i++)
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
	char* removeDuplicates(const char* arr, const unsigned int size, unsigned int* sizeDuplicates)
	{
		assert(arr != nullptr);
		assert(sizeDuplicates != nullptr);

		if (size == 0)
		{
			return new char[1];
		}

		char* placeholderArr = new char[size];

		int lastIndex = 0;

		for (unsigned int i = 0; i < size; i++)
		{
			bool found = false;

			for (unsigned int j = 0; j < size; j++)
			{
				if (arr[i] == placeholderArr[j])
				{
					found = true;
					break;
				}
			}

			if (!found)
			{
				placeholderArr[lastIndex++] = arr[i];
			}
		}

		char* arrToReturn = new char[lastIndex + 1];

		for (int i = 0; i < lastIndex; i++)
		{
			arrToReturn[i] = placeholderArr[i];
		}

		delete[] placeholderArr;
		*sizeDuplicates = lastIndex;

		return arrToReturn;
	}

	float* removeDuplicates(const float* arr, const unsigned int size, unsigned int* sizeDuplicates)
	{
		assert(arr != nullptr);
		assert(sizeDuplicates != nullptr);

		if (size == 0)
		{
			return new float[1];
		}

		float* placeholderArr = new float[size];

		int lastIndex = 0;

		for (unsigned int i = 0; i < size; i++)
		{
			bool found = false;

			for (unsigned int j = 0; j < size; j++)
			{
				if (areSame(arr[i], placeholderArr[j]))
				{
					found = true;
					break;
				}
			}

			if (!found)
			{
				placeholderArr[lastIndex++] = arr[i];
			}
		}

		float* arrToReturn = new float[lastIndex + 1];

		for (int i = 0; i < lastIndex; i++)
		{
			arrToReturn[i] = placeholderArr[i];
		}

		delete[] placeholderArr;

		*sizeDuplicates = lastIndex;

		return arrToReturn;
	}

	bool areSame(float a, float b)
	{
		return fabs(a - b) < std::numeric_limits<float>::epsilon();
	}

	void rotateToLeft(unsigned int* arr, const unsigned int size, const unsigned int rotations)
	{
		assert(arr != nullptr);

		unsigned int temp, temp2;

		for (unsigned int i = 0; i < rotations; i++)
		{
			temp = arr[0];

			for (int j = size - 1; j >= 0; j--)
			{
				temp2 = arr[j];
				arr[j] = temp;
				temp = temp2;
			}
		}
	}
}