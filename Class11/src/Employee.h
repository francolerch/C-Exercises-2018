#pragma once
#include <iostream>
#include <string>

namespace cpp_class11_test
{
	class TestEmployee;
}

namespace cpp_class11
{
	class Employee
	{
		friend cpp_class11_test::TestEmployee;
		friend std::ostream& operator<<(std::ostream& os, const Employee& employee);

	private:
		std::string m_Employer;
		int m_Salary;

	public:
		Employee(const std::string& employer, const int salary)
			: m_Employer(employer), m_Salary(salary) {};
		Employee(const Employee& employee)
			: m_Employer(employee.m_Employer), m_Salary(employee.m_Salary) {};

		Employee& operator=(const Employee& employee);

		inline std::string getEmployer() const { return m_Employer; };
		inline int getSalary() const { return m_Salary; }
		inline void setEmployer(std::string& employer) { m_Employer = employer; };
		inline void setSalary(int salary) { m_Salary = salary; };
	};
}