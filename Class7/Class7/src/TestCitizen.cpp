#include "TestCitizen.h"

namespace cpp_class7_test {
	using namespace cpp_class7;

	std::string name = "Juan";
	std::string lastName = "Sanchez";
	BirthDate birthDate = BirthDate(20, 11, 1954);

	void TestCitizen::TestConstructor()
	{
		Citizen::Gender gender = Citizen::Gender::MALE;

		Citizen testConstructor = Citizen(birthDate, name, lastName, gender);

		assert(testConstructor.getBirthDate().getDay() == 20);
		assert(testConstructor.getBirthDate().getMonth() == 11);
		assert(testConstructor.getBirthDate().getYear() == 1954);
		assert(testConstructor.getName() == name);
		assert(testConstructor.getGender() == gender);

		std::cout << "TestConstructor Test Passed" << std::endl;
	}

	void TestCitizen::TestCopyConstructor()
	{
		birthDate = BirthDate(20, 11, 1954);
		Citizen::Gender gender = Citizen::Gender::MALE;

		Citizen test = Citizen(birthDate, name, lastName, gender);
		Citizen testCopyConstructor = Citizen(test);

		assert(testCopyConstructor.getBirthDate().getDay() == test.getBirthDate().getDay());
		assert(testCopyConstructor.getBirthDate().getMonth() == test.getBirthDate().getMonth());
		assert(testCopyConstructor.getBirthDate().getYear() == test.getBirthDate().getYear());
		assert(testCopyConstructor.getName() == test.getName());
		assert(testCopyConstructor.getGender() == test.getGender());

		std::cout << "TestCopyConstructor Test Passed" << std::endl;
	}

	void TestCitizen::TestGetBirthDate()
	{
		birthDate = BirthDate(20, 11, 1954);
		Citizen::Gender gender = Citizen::Gender::MALE;

		Citizen test = Citizen(birthDate, name, lastName, gender);

		assert(test.getBirthDate().getDay() == 20);
		assert(test.getBirthDate().getMonth() == 11);
		assert(test.getBirthDate().getYear() == 1954);

		std::cout << "TestGetBirthDate Test Passed" << std::endl;
	}

	void TestCitizen::TestGetName()
	{
		birthDate = BirthDate(20, 11, 1954);
		Citizen::Gender gender = Citizen::Gender::MALE;

		Citizen test = Citizen(birthDate, name, lastName, gender);

		assert(test.getName() == test.getName());


		std::cout << "TestGetName Test Passed" << std::endl;
	}

	void TestCitizen::TestGetGender()
	{
		birthDate = BirthDate(20, 11, 1954);
		Citizen::Gender gender = Citizen::Gender::MALE;

		Citizen test = Citizen(birthDate, name, lastName, gender);

		assert(test.getGender() == gender);

		std::cout << "TestGetGender Test Passed" << std::endl;
	}

	void TestCitizen::TestIsAdult()
	{
		birthDate = BirthDate(20, 11, 1954);
		Citizen::Gender gender = Citizen::Gender::MALE;

		Citizen test = Citizen(birthDate, name, lastName, gender);

		assert(test.isAdult());

		birthDate = BirthDate(20, 11, 2017);
		test = Citizen(birthDate, name, lastName, gender);

		assert(!test.isAdult());

		std::cout << "TestIsAdult Test Passed" << std::endl;
	}

	void TestCitizen::TestIsTeenager()
	{
		birthDate = BirthDate(20, 11, 2002);
		Citizen::Gender gender = Citizen::Gender::MALE;

		Citizen test = Citizen(birthDate, name, lastName, gender);

		assert(test.isTeenager());

		birthDate = BirthDate(20, 11, 2017);
		test = Citizen(birthDate, name, lastName, gender);

		assert(!test.isTeenager());

		birthDate = BirthDate(20, 11, 1980);
		test = Citizen(birthDate, name, lastName, gender);

		assert(!test.isTeenager());

		std::cout << "TestIsTeenager Test Passed" << std::endl;
	}

	void TestCitizen::TestIsChild()
	{
		birthDate = BirthDate(20, 11, 2010);
		Citizen::Gender gender = Citizen::Gender::MALE;

		Citizen test = Citizen(birthDate, name, lastName, gender);

		assert(test.isChild());

		birthDate = BirthDate(20, 11, 1980);
		test = Citizen(birthDate, name, lastName, gender);

		assert(!test.isChild());

		std::cout << "TestIsChild Test Passed" << std::endl;
	}

	void TestCitizen::TestIsRetired()
	{
		birthDate = BirthDate(20, 11, 1940);
		Citizen::Gender gender = Citizen::Gender::MALE;

		Citizen test = Citizen(birthDate, name, lastName, gender);

		assert(test.isRetired());

		birthDate = BirthDate(20, 11, 1954);
		test = Citizen(birthDate, name, lastName, gender);

		assert(!test.isRetired());

		birthDate = BirthDate(20, 11, 1957);
		gender = Citizen::Gender::FEMALE;
		test = Citizen(birthDate, name, lastName, gender);

		assert(test.isRetired());

		birthDate = BirthDate(20, 11, 1958);
		test = Citizen(birthDate, name, lastName, gender);

		assert(!test.isRetired());

		std::cout << "TestIsRetired Test Passed" << std::endl;
	}
}