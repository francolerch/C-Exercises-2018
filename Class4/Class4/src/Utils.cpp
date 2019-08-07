#include "Utils.h"
#include <random>
#include <time.h>
#include <iostream>
#include <string>
#define print(x) std::cout << x << std::endl;

namespace cpp_class4
{
	unsigned int getRandomPrimeInteger()
	{
		bool isPrime = true;
		unsigned int num;

		while (true)
		{
			num = std::rand() % 100;

			for (unsigned int j = 2; j < num / 2; j++)
			{

				if (num % j == 0)
				{
					isPrime = false;
					break;
				}
			}

			if (isPrime) {
				return num;
			}
		}

	}

	std::string getLanguageCreator(const Language input)
	{
		std::string name;

		switch (input) {
		case CPP:
			name = "Bjarne Stroustrup";
			break;
		case C:
			name = "Dennis Ritchie";
			break;
		case JAVA:
			name = "James Gosling";
			break;
		case PYTHON:
			name = "Guido van Rossum";
			break;
		case COBOL:
			name = "CODASYL";
			break;
		case CSHARP:
			name = "Microsoft";
			break;
		case HTML:
			name = "Tim Berners-Lee";
			break;
		case RUBY:
			name = "Yukihiro Matsumoto";
			break;
		}

		return name;
	}
	bool findFirstOccurence(const int input[10], const int num, const bool searchFromEnd, int & index)
	{
		const unsigned int arrayLength = 10;
		unsigned short count = 0;

		if (!searchFromEnd) {

			for (unsigned int i = 0; i < arrayLength; i++)
			{
				if (input[i] == num) {
					index = count;
					return true;
				}
				count++;
			}
		}
		else
		{
			for (unsigned int i = arrayLength - 1; i >= 0; i--)
			{
				if (input[i] == num) {
					index = count;
					return true;
				}
				count++;
			}
		}
		return false;
	}
	void sortByType(int input[10], SortType sortType)
	{
		const unsigned short size = 10;

		if (sortType == SortType::BUBBLE)
		{
			bool sorted = false;

			while (!sorted) {
				bool swap = false;

				for (int i = 0; i < size - 1; i++)
				{

					if (input[i] > input[i + 1])
					{
						int temp = input[i];
						input[i] = input[i + 1];
						input[i + 1] = temp;
						swap = true;
					}
				}

				if (!swap)
				{
					sorted = true;
				}
			}
		}
		else if (sortType == SortType::QUICK)
		{
			quicksort(input, 0, size - 1);
		}
		else if (sortType == SortType::MERGE)
		{
			mergeSort(input, 0, size - 1);
		}
	}

	static int partition(int input[10], int size, int index)
	{		int pivot = input[index];
		int pind = size;
		int i, temp;
		for (i = size; i < index; i++)
		{
			if (input[i] <= pivot)
			{
				temp = input[i];
				input[i] = input[pind];
				input[pind] = temp;
				pind++;
			}
		}

		temp = input[index];
		input[index] = input[pind];
		input[pind] = temp;
		return pind;
	}
	static void quicksort(int input[10], int size, int e)
	{
		if (size < e)
		{
			int pind = partition(input, size, e);
			quicksort(input, size, pind - 1);
			quicksort(input, pind + 1, e);
		}
	}
	void mergeSort(int input[10], int low, int high)
	{
		int pivot;
		if (low < high)
		{
			pivot = (low + high) / 2;
			mergeSort(input, low, pivot);
			mergeSort(input, pivot + 1, high);
			merge(input, low, pivot, high);
		}
	}
	void merge(int input[10], int low, int pivot, int high)
	{
		int h, i, j, k;
		int b[10];
		h = low;
		i = low;
		j = pivot + 1;

		while ((h <= pivot) && (j <= high))
		{
			if (input[h] <= input[j])
			{
				b[i] = input[h];
				h++;
			}
			else
			{
				b[i] = input[j];
				j++;
			}
			i++;
		}
		if (h > pivot)
		{
			for (k = j; k <= high; k++)
			{
				b[i] = input[k];
				i++;
			}
		}
		else
		{
			for (k = h; k <= pivot; k++)
			{
				b[i] = input[k];
				i++;
			}
		}
		for (k = low; k <= high; k++) input[k] = b[k];
	}

}