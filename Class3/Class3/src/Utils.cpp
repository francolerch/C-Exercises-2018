#include "Utils.h"


namespace cpp_class3 {

	void fillArray(void* pointer, const unsigned int size, const Type type)
	{
		assert(pointer != nullptr);
		
		if (type == Type::INT)
		{
			int* p_Int = reinterpret_cast<int*>(pointer);

			for (unsigned int i = 0; i < size; i++)
			{
				p_Int[i] = std::rand() % Type::INT;
			}
		} 
		else
		{
			char* p_Char = reinterpret_cast<char*>(pointer);

			for (unsigned int i = 0; i < size; i++)
			{
				p_Char[i] = std::rand() % Type::CHAR;
			}
		}
	}

	void printCharAray(char* p_Array, const unsigned int size)
	{
		assert(p_Array != nullptr);

		fillArray(p_Array, size, Type::CHAR);

		std::cout << "Char Array: [ ";

		for (unsigned int i = 0; i < size; i++)
		{
			std::cout << p_Array[i];

			if (i < size - 1)
				std::cout << ", ";
		}
		std::cout << " ]" << std::endl;
	}
	void printIntAray(int* p_Array, const unsigned int size)
	{
		assert(p_Array != nullptr);

		fillArray(p_Array, size, Type::INT);

		std::cout << "Int Array: [ ";

		for (unsigned int i = 0; i < size; i++)
		{
			std::cout << p_Array[i];

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
	void paritySort(int* inputArray, unsigned int size, int* p_evenCount, int* p_oddCount)
	{
		assert(inputArray != nullptr);
		assert(p_evenCount != nullptr);
		assert(p_oddCount != nullptr);

		bool sorted = false;

		for (unsigned int i = 0; i < size; i++)
		{
			if ((inputArray[i] & 1) != 1)
			{
				(*p_evenCount)++;
			}
			else
			{
				(*p_oddCount)++;
			}
		}

		while (!sorted)
		{
			bool swap = false;

			for (unsigned int i = 0; i < size - 1; i++)
			{
				if (inputArray[i] < inputArray[i + 1])
				{
					inputArray[i] ^= inputArray[i + 1];
					inputArray[i + 1] ^= inputArray[i];
					inputArray[i] ^= inputArray[i + 1];
					swap = true;
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
	bool areThereDuplicates(int* array1, const unsigned int size)
	{
		for (unsigned int i = 0; i < size - 1; i++)
		{
			for (unsigned int j = i + 1; j < size; j++)
			{
				if (array1[i] == array1[j])
					return true;
			}
		}
		return false;
	}
}