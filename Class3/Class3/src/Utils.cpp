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
		
		for (unsigned int i = 0; i < size ; i++)
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
		const char CASE_DIFFERENCE = 32;

		for (unsigned int i = 0 ; i < size ; i++)
		{
			if (pointer[i] > 64 && pointer[i] < 91)
			{
				pointer[i] = pointer[i] + CASE_DIFFERENCE;
			}
			else if (pointer[i] > 96 && pointer[i] < 123) 
			{
				pointer[i] = pointer[i] - CASE_DIFFERENCE;
			}
		}
	}
}