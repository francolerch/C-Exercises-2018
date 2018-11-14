#pragma once

namespace cpp_class3 {
	enum Type;

	void fillArray(void* pointer, const unsigned int size, const Type type);
	void printCharAray();
	void printIntAray();
	void toggleCharCase(char* pointer, unsigned int size);
	void paritySort(int* inputArray, unsigned int size, int* evenArray, int* oddArray);
	bool areConsecutives(const int* array1, const int* array2, const unsigned int size1, const unsigned int size2);
	bool isReverseOf(short int* array1, short int* array2, const unsigned int size1, const unsigned int size2);
}