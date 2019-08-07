#include "TestBirthDate.h"

namespace cpp_class7_test {
	using namespace cpp_class7;

	void TestBirthDate::TestConstructor()
	{
		BirthDate testConstructor = BirthDate(4, 5, 1985);

		assert(testConstructor.getDay() == 4);
		assert(testConstructor.getMonth() == 5);
		assert(testConstructor.getYear() == 1985);

		std::cout << "TestConstructor Test Passed" << std::endl;
	}

	void TestBirthDate::TestCopyConstructor()
	{
		BirthDate testConstructor = BirthDate(2, 2, 1990);
		BirthDate testCopy = BirthDate(testConstructor);

		assert(testCopy.getDay() == 2);
		assert(testCopy.getMonth() == 2);
		assert(testCopy.getYear() == 1990);

		std::cout << "TestCopyConstructor Test Passed" << std::endl;
	}


	void TestBirthDate::TestGetDay()
	{
		BirthDate test = BirthDate(5, 10, 1998);

		assert(test.getDay() == 5);

		std::cout << "TestGetDay Test Passed" << std::endl;
	}


	void TestBirthDate::TestGetMonth()
	{
		BirthDate test = BirthDate(5, 10, 1998);

		assert(test.getMonth() == 10);

		std::cout << "TestGetMonth Test Passed" << std::endl;
	}


	void TestBirthDate::TestGetYear()
	{
		BirthDate test = BirthDate(5, 10, 1998);

		assert(test.getYear() == 1998);

		std::cout << "TestGetYear Test Passed" << std::endl;
	}

	void TestBirthDate::TestToString()
	{
		BirthDate test = BirthDate(5, 8, 2001);

		assert(test.toString() == "2001/5/8");

		std::cout << "TestToString Test Passed" << std::endl;
	}

	void TestBirthDate::TestGetZodiacSign()
	{
		BirthDate test0 = BirthDate(31, 8, 1992);
		BirthDate test1 = BirthDate(31, 1, 1990);
		BirthDate test2 = BirthDate(21, 2, 1989);

		assert(test0.getZodiacSign() == BirthDate::Virgo);
		assert(test1.getZodiacSign() == BirthDate::Aquarius);
		assert(test2.getZodiacSign() == BirthDate::Pisces);

		std::cout << "TestGetZodiacSign Test Passed" << std::endl;
	}

	void TestBirthDate::TestGetAge()
	{
		BirthDate test0 = BirthDate(31, 8, 1992);
		BirthDate test1 = BirthDate(1, 1, 1992);

		assert(test0.getAge() == 26);
		assert(test1.getAge() == 27);

		std::cout << "TestGetAge Test Passed" << std::endl;
	}
}