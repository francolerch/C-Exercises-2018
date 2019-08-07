#pragma once
#include <stdlib.h>
#include <assert.h>
#include <iostream>

namespace cpp_class3 {
	enum Type {
		CHAR = CHAR_MAX,
		INT = INT_MAX
	};

	void fillArray(void* pointer, const unsigned int size, const Type type);
	void printCharAray(char* p_Array, const unsigned int size);
	void printIntAray(int* p_Array, const unsigned int size);
	void toggleCharCase(char* pointer, unsigned int size);
	void paritySort(int* inputArray, const unsigned int size, int* p_evenCount, int* p_oddCount);
	bool areConsecutives(const int* array1, const int* array2, const unsigned int size1, const unsigned int size2);
	bool isReverseOf(short int* array1, short int* array2, const unsigned int size1, const unsigned int size2);
	bool areThereDuplicates(int* array1, const unsigned int size);
}