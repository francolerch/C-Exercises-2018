#include "TestTeacher.h"

#include <iostream>
#include <assert.h>

namespace cpp_class11_test {
	using namespace cpp_class11;

	void TestTeacher::runTest()
	{
		std::cout << std::endl;
		std::cout << "TestTeacher Tests:" << std::endl;

		testConstructor();
		testCopyConstructor();
		testLeftShiftOperator();
	}

	void TestTeacher::testConstructor() const
	{
		Teacher teacher("Pablo", "Sanchez", 25424515, "Rivas", 30000, Teacher::Grade::SECONDARY);

		assert(teacher.getName() == "Pablo");
		assert(teacher.getLastName() == "Sanchez");
		assert(teacher.getDNI() == 25424515);
		assert(teacher.getEmployer() == "Rivas");
		assert(teacher.getSalary() == 30000);
		assert(teacher.getGrade() == Teacher::Grade::SECONDARY);

		std::cout << "TestConstructor Test Passed" << std::endl;
	}

	void TestTeacher::testCopyConstructor() const
	{
		Teacher teacher("Pablo", "Sanchez", 25424515, "Rivas", 30000, Teacher::Grade::SECONDARY);
		Teacher teacher2(teacher);

		assert(teacher2.getName() == "Pablo");
		assert(teacher2.getLastName() == "Sanchez");
		assert(teacher2.getDNI() == 25424515);
		assert(teacher2.getEmployer() == "Rivas");
		assert(teacher2.getSalary() == 30000);
		assert(teacher2.getGrade() == Teacher::Grade::SECONDARY);


		std::cout << "testCopyConstructor Test Passed" << std::endl;
	}

	void TestTeacher::testLeftShiftOperator() const
	{
		Teacher teacher("Pablo", "Sanchez", 25424515, "Rivas", 30000, Teacher::Grade::SECONDARY);

		std::cout << "testLeftShiftOperator: \n";
		std::cout << teacher << std::endl;

		std::cout << "testLeftShiftOperator Test Passed" << std::endl;
	}
}

