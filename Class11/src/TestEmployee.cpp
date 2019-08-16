#include "TestEmployee.h"

#include <iostream>
#include <assert.h>

namespace cpp_class11_test {
	using namespace cpp_class11;

	void TestEmployee::runTest()
	{
		std::cout << std::endl;
		std::cout << "TestEmployee Tests:" << std::endl;

		testConstructor();
		testCopyConstructor();
		testEqualOperator();
		testLeftShiftOperator();
	}

	void TestEmployee::testConstructor() const
	{
		Employee employee("Rivas", 30000);

		assert(employee.m_Employer == "Rivas");
		assert(employee.m_Salary == 30000);

		std::cout << "TestConstructor Test Passed" << std::endl;
	}

	void TestEmployee::testCopyConstructor() const
	{
		Employee employee("Rivas", 30000);
		Employee employee2(employee);

		assert(employee2.m_Employer == "Rivas");
		assert(employee2.m_Salary == 30000);

		std::cout << "testCopyConstructor Test Passed" << std::endl;
	}

	void TestEmployee::testEqualOperator() const
	{
		Employee employee("Rivas", 30000);
		Employee employee2("Sanchez", 25000);

		employee = employee2;

		assert(employee.m_Employer == "Sanchez");
		assert(employee.m_Salary == 25000);

		std::cout << "testEqualOperator Test Passed" << std::endl;
	}

	void TestEmployee::testLeftShiftOperator() const
	{
		Employee employee("Rivas", 30000);

		std::cout << "testLeftShiftOperator: \n";
		std::cout << employee << std::endl;

		std::cout << "testLeftShiftOperator Test Passed" << std::endl;
	}

}

