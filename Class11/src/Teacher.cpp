#include "Teacher.h"

namespace cpp_class11 {
	std::ostream& operator<<(std::ostream& os, const Teacher& teacher)
	{
		std::string gradeStr;
		switch (teacher.getGrade())
		{
		case Teacher::Grade::KINDERGARTEN:
			gradeStr = "Kindergarten";
			break;
		case Teacher::Grade::PRIMARY:
			gradeStr = "Primary";
			break;
		case Teacher::Grade::SECONDARY:
			gradeStr = "Secondary";
			break;
		case Teacher::Grade::UNIVERSITY:
			gradeStr = "University";
			break;
		}

		os << teacher.getName() << " " << teacher.getLastName() << " "
			<< teacher.getDNI() << " " << teacher.getEmployer() << " "
			<< teacher.getSalary() << " " << gradeStr;

		return os;
	}
}