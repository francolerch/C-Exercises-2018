#pragma once

namespace cpp_class3 {
	enum Type;

	void fillArray(void* pointer, const unsigned int size, const Type type);
	void printCharAray();
	void printIntAray();
	void toggleCharCase(char* pointer, unsigned int size);
	void paritySort(int* inputArray, unsigned int size, int* evenArray, int* oddArray);
}