#include "TestUtils.h"
#include "Utils.h"
#include <assert.h>
#include <iostream>
#define print(x) std::cout << x << std::endl;

namespace cpp_class4_test {

	using namespace cpp_class4;

	void testRandomPrimeInteger()
	{
		assert(isPrime(getRandomPrimeInteger()));
	
		print("getRandomPrimeInteger Test Passed");

	}

	static bool isPrime(unsigned int num)
	{
		bool isPrime = true;

		for (unsigned int j = 2; j < num / 2; j++)
		{

			if (num % j == 0)
			{
				isPrime = false;
				break;
			}
		}

		return isPrime;
	}

	void testGetLanguageCreator()
	{		
		assert(getLanguageCreator(Language::CPP) == "Bjarne Stroustrup");
		assert(getLanguageCreator(Language::C) == "Dennis Ritchie");
		assert(getLanguageCreator(Language::JAVA) == "James Gosling");
		assert(getLanguageCreator(Language::PYTHON) == "Guido van Rossum");
		assert(getLanguageCreator(Language::COBOL) == "CODASYL");
		assert(getLanguageCreator(Language::CSHARP) == "Microsoft");
		assert(getLanguageCreator(Language::HTML) == "Tim Berners-Lee");
		assert(getLanguageCreator(Language::RUBY) == "Yukihiro Matsumoto");

		print("testGetLanguageCreator Test Passed");

	}

	void testFindFirstOccurence()
	{
		const int input[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		int index = 0;

		assert(findFirstOccurence(input, 3, false, index));
		assert(index == 2);

		assert(findFirstOccurence(input, 8, true, index));
		assert(index == 2);

		assert(findFirstOccurence(input, 5, false, index));
		assert(index == 4);

		print("testFindFirstOccurence Test Passed");
	}

	void testSortByType()
	{
		int input1[10] = { 94, 42, 50, 95, 333, 65, 54, 456, 1, 1234 };
		int input2[10] = { 94, 42, 50, 95, 333, 65, 54, 456, 1, 1234 };
		int input3[10] = { 94, 42, 50, 95, 333, 65, 54, 456, 1, 1234 };

		sortByType(input1, SortType::BUBBLE);

		for (short int i = 0; i < 9; i++)
		{
			assert(input1[i] < input1[i + 1]);
		}

		sortByType(input2, SortType::QUICK);

		for (short int i = 0; i < 9; i++)
		{
			assert(input2[i] < input2[i + 1]);
		}

		sortByType(input3, SortType::MERGE);

		for (short int i = 0; i < 9; i++)
		{
			assert(input3[i] < input3[i + 1]);
		}

		print("testSortByType Test Passed");
	}
}