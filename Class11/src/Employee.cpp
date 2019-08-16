#include "Employee.h"

namespace cpp_class11 {

	Employee& Employee::operator=(const Employee& employee)
	{
		if (this == &employee)
			return *this;

		m_Employer = employee.m_Employer;
		m_Salary = employee.m_Salary;

		return *this;
	}

	std::ostream& operator<<(std::ostream& os, const Employee& employee)
	{
		os << employee.getEmployer() << " " << employee.getSalary();

		return os;
	}
}