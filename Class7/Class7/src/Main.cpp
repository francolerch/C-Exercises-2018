#include "TestBirthDate.h"
#include "TestCitizen.h"
#include "TestCity.h"

int main()
{
	std::cout << "-------- BirthDate Class -----------" << std::endl;
	std::cout << std::endl;

	cpp_class7_test::TestBirthDate testBirthDate;

	testBirthDate.TestConstructor();
	testBirthDate.TestCopyConstructor();
	testBirthDate.TestGetDay();
	testBirthDate.TestGetMonth();
	testBirthDate.TestGetYear();
	testBirthDate.TestGetAge();
	testBirthDate.TestGetZodiacSign();
	testBirthDate.TestToString();

	std::cout << std::endl;
	std::cout << "-------- Citizen Class -----------" << std::endl;
	std::cout << std::endl;


	cpp_class7_test::TestCitizen testCitizen;

	testCitizen.TestConstructor();
	testCitizen.TestCopyConstructor();
	testCitizen.TestGetBirthDate();
	testCitizen.TestGetName();
	testCitizen.TestGetGender();
	testCitizen.TestIsAdult();
	testCitizen.TestIsTeenager();
	testCitizen.TestIsChild();
	testCitizen.TestIsRetired();

	std::cout << std::endl;
	std::cout << "-------- City Class -----------" << std::endl;
	std::cout << std::endl;


	cpp_class7_test::TestCity testCity;

	testCity.TestConstructor();
	testCity.TestCopyConstructor();
	testCity.TestAddCitizen();
	testCity.TestGetRetiredCount();
	testCity.TestGetChildCount();
	testCity.TestGetManCount();
	testCity.TestGetWomanCount();
	testCity.TestGetCitizenByName();

	std::cin.get();
	return 0;
}
