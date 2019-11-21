#pragma once
#include "Person.h"
#include "Employee.h"

#include <ostream>

namespace cpp_class11_test
{
	class TestTeacher;
}

namespace cpp_class11
{
	class Teacher : public Person, public Employee
	{
		friend cpp_class11_test::TestTeacher;
		friend std::ostream& operator<<(std::ostream& os, const Teacher& teacher);

		enum class Grade {
			KINDERGARTEN = 0,
			PRIMARY,
			SECONDARY,
			UNIVERSITY
		};

	private:
		Grade m_Grade;
	public:
		Teacher(const std::string& name, const std::string& lastName, unsigned int dni, const std::string& employer,
			const int salary, const Grade& grade)
			: Person(name, lastName, dni), Employee(employer, salary), m_Grade(grade) {};

		Grade getGrade() const { return m_Grade; }
	};
}