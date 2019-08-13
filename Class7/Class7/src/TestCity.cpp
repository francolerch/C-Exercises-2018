#include "TestCity.h"

namespace cpp_class7_test {
	using namespace cpp_class7;

	void TestCity::TestConstructor()
	{
		City testConstructor = City(128);

		assert(testConstructor.m_maxPop == 128);
		assert(testConstructor.m_citizen != nullptr);
		assert(testConstructor.m_lastPop == 0);

		std::cout << "TestConstructor Test Passed" << std::endl;
	}

	void TestCity::TestCopyConstructor()
	{
		City test = City(128);
		City test2(test);

		assert(test2.m_maxPop == test.m_maxPop);
		assert(test2.m_citizen != nullptr && test2.m_citizen != test.m_citizen);
		assert(test2.m_lastPop == test.m_lastPop);

		std::cout << "TestCopyConstructor Test Passed" << std::endl;
	}

	void TestCity::TestAddCitizen()
	{
		City testCity = City(1);
		BirthDate birthDate = BirthDate(31, 8, 1992);
		Citizen* testCitizen = new Citizen(birthDate, "Franco", "Lerch", Citizen::Gender::MALE);
		Citizen* testCitizen2 = new Citizen(birthDate, "Juan", "Sanchez", Citizen::Gender::MALE);

		assert(testCity.addCitizen(*testCitizen));
		assert(!testCity.addCitizen(*testCitizen));
		assert(!testCity.addCitizen(*testCitizen2));

		std::cout << "TestAddCitizen Test Passed" << std::endl;
	}

	void TestCity::TestGetRetiredCount()
	{
		City testCity = City(3);

		BirthDate birthDate = BirthDate(31, 8, 1992);
		BirthDate birthDate2 = BirthDate(31, 8, 1925);
		BirthDate birthDate3 = BirthDate(31, 8, 1944);

		Citizen* testCitizen = new Citizen(birthDate, "Franco", "Lerch", Citizen::Gender::MALE);
		Citizen* testCitizen2 = new Citizen(birthDate2, "Juan", "Sanchez", Citizen::Gender::MALE);
		Citizen* testCitizen3 = new Citizen(birthDate3, "Laura", "Lopez", Citizen::Gender::FEMALE);

		testCity.addCitizen(*testCitizen);
		testCity.addCitizen(*testCitizen2);
		testCity.addCitizen(*testCitizen3);

		assert(testCity.getRetiredCount() == 2);

		std::cout << "TestGetRetiredCount Test Passed" << std::endl;
	}

	void TestCity::TestGetChildCount()
	{
		City testCity = City(3);

		BirthDate birthDate = BirthDate(31, 8, 2010);
		BirthDate birthDate2 = BirthDate(31, 8, 1925);

		Citizen* testCitizen = new Citizen(birthDate, "Franco", "Lerch", Citizen::Gender::MALE);
		Citizen* testCitizen2 = new Citizen(birthDate2, "Juan", "Sanchez", Citizen::Gender::MALE);

		testCity.addCitizen(*testCitizen);
		testCity.addCitizen(*testCitizen2);

		assert(testCity.getRetiredCount() == 1);

		std::cout << "TestGetChildCount Test Passed" << std::endl;
	}

	void TestCity::TestGetManCount()
	{
		City testCity = City(3);

		BirthDate birthDate = BirthDate(31, 8, 2010);
		BirthDate birthDate2 = BirthDate(31, 8, 1925);

		Citizen* testCitizen = new Citizen(birthDate, "Franco", "Lerch", Citizen::Gender::MALE);
		Citizen* testCitizen2 = new Citizen(birthDate2, "Juan", "Sanchez", Citizen::Gender::MALE);

		testCity.addCitizen(*testCitizen);
		testCity.addCitizen(*testCitizen2);

		assert(testCity.getManCount() == 2);

		std::cout << "TestGetManCount Test Passed" << std::endl;
	}

	void TestCity::TestGetWomanCount()
	{
		City testCity = City(3);

		BirthDate birthDate = BirthDate(31, 8, 2010);
		BirthDate birthDate2 = BirthDate(31, 8, 1925);

		Citizen* testCitizen = new Citizen(birthDate, "Laura", "Lopez", Citizen::Gender::FEMALE);
		Citizen* testCitizen2 = new Citizen(birthDate2, "Juan", "Sanchez", Citizen::Gender::MALE);

		testCity.addCitizen(*testCitizen);
		testCity.addCitizen(*testCitizen2);

		assert(testCity.getManCount() == 1);

		std::cout << "TestGetWomanCount Test Passed" << std::endl;
	}

	void TestCity::TestGetCitizenByName()
	{
		City testCity = City(2);

		BirthDate birthDate = BirthDate(31, 8, 2010);
		BirthDate birthDate2 = BirthDate(31, 8, 1925);

		Citizen* testCitizen = new Citizen(birthDate, "Laura", "Lopez", Citizen::Gender::FEMALE);
		Citizen* testCitizen2 = new Citizen(birthDate2, "Juan", "Sanchez", Citizen::Gender::MALE);

		testCity.addCitizen(*testCitizen);
		testCity.addCitizen(*testCitizen2);

		Citizen* assertCitizen = testCity.getCitizenByName("Juan", "Sanchez");

		assert(assertCitizen->getName().compare(testCitizen2->getName()) == 0);
		assert(assertCitizen->getLastName().compare(testCitizen2->getLastName()) == 0);

		std::cout << "TestGetCitizenByName Test Passed" << std::endl;
	}
}