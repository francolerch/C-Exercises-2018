#pragma once
#include <string>

enum Language
{
	CPP,
	C,
	JAVA,
	PYTHON,
	COBOL,
	CSHARP,
	HTML,
	RUBY
};

enum SortType
{
	BUBBLE,
	QUICK,
	MERGE
};

namespace cpp_class4 {
	unsigned int getRandomPrimeInteger();
	std::string getLanguageCreator(const Language input);
	bool findFirstOccurence(const int input[10], const int num, const bool searchFromEnd, int &index);
	void sortByType(int input[10], SortType sortType);
	static void quicksort(int input[10], int s, int index);
	static int partition(int input[10], int s, int index);
	void merge(int input[10], int low, int pivot, int high);
	void mergeSort(int input[10], int low, int high);
}