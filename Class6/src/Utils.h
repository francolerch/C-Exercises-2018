#pragma once
#include <assert.h>

namespace cpp_class6{
	void sortArray(float* arr, const unsigned int size);
	void sortArray(int* arr, const unsigned int size);
	char* removeDuplicates(const char* arr, const unsigned int size, unsigned int* sizeDuplicates);
	float* removeDuplicates(const float* arr, const unsigned int size, unsigned int* sizeDuplicates);
	bool areSame(float a, float b);
	void rotateToLeft(unsigned int* arr, const unsigned int size, const unsigned int rotations);
}