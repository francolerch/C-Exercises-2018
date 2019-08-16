#include "TestPerson.h"
#include <assert.h>

namespace cpp_class11_test {

	using namespace cpp_class11;

	void TestPerson::runTest()
	{
		std::cout << std::endl;
		std::cout << "TestPerson Tests:" << std::endl;

		testConstructor();
		testLeftShiftOperator();
	}

	void TestPerson::testConstructor() const
	{
		{
			Person person("Pepe", "Sanchez", 33254875);

			assert(person.m_Name == "Pepe");
			assert(person.m_LastName == "Sanchez");
			assert(person.m_DNI == 33254875);
		}

		{
			try
			{
				Person person("Pepe", "Sanchez", 502020);
				assert(false);
			}
			catch (const std::invalid_argument&)
			{

			}

		}
		{
			try
			{
				Person person("Pepe", "Sanchez", 1000000000);
				assert(false);
			}
			catch (const std::invalid_argument&)
			{

			}
		}

		std::cout << "TestConstructor Test Passed" << std::endl;
	}

	void TestPerson::testLeftShiftOperator() const
	{
		Person person("Pepe", "Sanchez", 33254875);

		std::cout << "testLeftShiftOperator: \n";
		std::cout << person << std::endl;

		std::cout << "testLeftShiftOperator Test Passed" << std::endl;
	}

}

