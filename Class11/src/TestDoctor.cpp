#include "TestDoctor.h"

#include <iostream>
#include <assert.h>

namespace cpp_class11_test {
	using namespace cpp_class11;

	void TestDoctor::runTest()
	{
		std::cout << std::endl;
		std::cout << "TestDoctor Tests:" << std::endl;

		testConstructor();
		testCopyConstructor();
		testLeftShiftOperator();
	}

	void TestDoctor::testConstructor() const
	{
		Doctor doctor("Pablo", "Sanchez", 25424515, "Rivas", 30000, Doctor::Specialty::CARDIOLOGY);

		assert(doctor.getName() == "Pablo");
		assert(doctor.getLastName() == "Sanchez");
		assert(doctor.getDNI() == 25424515);
		assert(doctor.getEmployer() == "Rivas");
		assert(doctor.getSalary() == 30000);
		assert(doctor.getSpecialty() == Doctor::Specialty::CARDIOLOGY);

		std::cout << "TestConstructor Test Passed" << std::endl;
	}

	void TestDoctor::testCopyConstructor() const
	{
		Doctor doctor("Pablo", "Sanchez", 25424515, "Rivas", 30000, Doctor::Specialty::CARDIOLOGY);
		Doctor doctor2(doctor);

		assert(doctor2.getName() == "Pablo");
		assert(doctor2.getLastName() == "Sanchez");
		assert(doctor2.getDNI() == 25424515);
		assert(doctor2.getEmployer() == "Rivas");
		assert(doctor2.getSalary() == 30000);
		assert(doctor2.getSpecialty() == Doctor::Specialty::CARDIOLOGY);


		std::cout << "testCopyConstructor Test Passed" << std::endl;
	}

	void TestDoctor::testLeftShiftOperator() const
	{
		Doctor doctor("Pablo", "Sanchez", 25424515, "Rivas", 30000, Doctor::Specialty::CARDIOLOGY);

		std::cout << "testLeftShiftOperator: \n";
		std::cout << doctor << std::endl;

		std::cout << "testLeftShiftOperator Test Passed" << std::endl;
	}
}

