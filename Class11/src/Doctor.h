#pragma once
#include "Person.h"
#include "Employee.h"

#include <ostream>

namespace cpp_class11_test
{
	class TestDoctor;
}

namespace cpp_class11
{
	class Doctor : public Person, public Employee
	{
		friend cpp_class11_test::TestDoctor;
		friend std::ostream& operator<<(std::ostream& os, const Doctor& doctor);

		enum class Specialty {
			PSYCHIATRY = 0,
			DERMATOLOGY,
			ANESTHESIOLOGY,
			CARDIOLOGY
		};

	private:
		Specialty m_Specialty;
	public:
		Doctor(const std::string& name, const std::string& lastName, unsigned int dni, const std::string& employer,
			const int salary, const Specialty& specialty)
			: Person(name, lastName, dni), Employee(employer, salary), m_Specialty(specialty) {};

		Specialty getSpecialty() const { return m_Specialty; }
	};
}