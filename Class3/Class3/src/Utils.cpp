#include "Utils.h"
#include <stdlib.h>
#include <assert.h>
#include <iostream>

namespace cpp_class3 {
	enum Type {
		CHAR = CHAR_MAX,
		INT = INT_MAX
	};

	void fillArray(void* pointer, const unsigned int size, const Type type)
	{
		assert(pointer != nullptr);
		bool isInt = (type == INT);

		for (unsigned int i = 0; i < size; i++)
		{
			if (isInt)
				reinterpret_cast<int*>(pointer)[i] = std::rand() % type;
			else
				reinterpret_cast<char*>(pointer)[i] = std::rand() % type;
		}
	}
	void printCharAray()
	{

		const unsigned int size = 10;
		char array[size];
		char* p_Array = array;

		assert(p_Array != nullptr);

		fillArray(p_Array, size, Type::CHAR);

		std::cout << "[ ";

		for (unsigned int i = 0; i < size; i++)
		{
			std::cout << array[i];

			if (i < size - 1)
				std::cout << ", ";
		}
		std::cout << " ]" << std::endl;
	}
	void printIntAray()
	{
		const unsigned int size = 5;
		int array[size];
		int* p_Array = array;

		assert(p_Array != nullptr);

		fillArray(p_Array, size, Type::INT);

		std::cout << "[ ";

		for (unsigned int i = 0; i < size; i++)
		{
			std::cout << array[i];

			if (i < size - 1)
				std::cout << ", ";
		}
		std::cout << " ]" << std::endl;
	}
	void toggleCharCase(char* pointer, unsigned int size)
	{
		assert(pointer != nullptr);

		const char CASE_DIFFERENCE = 32;

		for (unsigned int i = 0; i < size; i++)
		{
			if ((pointer[i] > 64 && pointer[i] < 91) || (pointer[i] > 96 && pointer[i] < 123))
			{
				pointer[i] ^= ' ';
			}
		}
	}
	void paritySort(int* inputArray, unsigned int size, int* evenArray, int* oddArray)
	{
		assert(inputArray != nullptr);
		assert(evenArray != nullptr);
		assert(oddArray != nullptr);

		unsigned int evenArraySize = 0, oddArraySize = 0;
		bool sorted = false;

		for (unsigned int i = 0; i < size; i++)
		{
			if ((inputArray[i] & 1) != 1)
			{
				evenArray[evenArraySize] = inputArray[i];
				evenArraySize++;
			}
			else
			{
				oddArray[oddArraySize] = inputArray[i];
				oddArraySize++;
			}
		}

		while (!sorted)
		{
			bool swap = false;

			for (unsigned int i = 0; i < evenArraySize - 1; i++)
			{
				if (evenArray[i] < evenArray[i + 1])
				{
					evenArray[i] ^= evenArray[i + 1];
					evenArray[i + 1] ^= evenArray[i];
					evenArray[i] ^= evenArray[i + 1];
					swap = true;
				}
			}

			if (!swap)
			{
				sorted = true;
			}
		}

		sorted = false;

		while (!sorted)
		{
			bool swap = false;

			for (unsigned int i = 0; i < oddArraySize - 1; i++)
			{
				if (oddArray[i] < oddArray[i + 1])
				{
					oddArray[i] ^= oddArray[i + 1];
					oddArray[i + 1] ^= oddArray[i];
					oddArray[i] ^= oddArray[i + 1];
				}
			}
			if (!swap)
			{
				sorted = true;
			}
		}

	}
	bool areConsecutives(const int* array1, const int* array2, const unsigned int size1, const unsigned int size2)
	{
		assert(array1 != nullptr);
		assert(array2 != nullptr);

		bool isConsecutive = false;

		for (unsigned int i = 0; i < (size1 - 1); i++)
		{
			isConsecutive = ( array1[i] + 1 == array1[i + 1] );
			
			if (!isConsecutive)
				return false;
		}

		for (unsigned int i = 0; i < (size2 - 1); i++)
		{
			isConsecutive = (array2[i] + 1 == array2[i + 1]);

			if (!isConsecutive)
				return false;
		}

		return (array1[size1 - 1] == (array2[0] - 1));
	}
	bool isReverseOf(short int* array1, short int* array2, const unsigned int size1, const unsigned int size2)
	{
		assert(array1 != nullptr);
		assert(array2 != nullptr);

		if (size1 != size2)
			return false;

		for (unsigned int i = 0; i < size1; i++)
		{
			if (array1[i] != array2[size2 - i - 1])
				return false;
		}

		return true;
	}
}