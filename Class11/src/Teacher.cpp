#include "Teacher.h"

namespace cpp_class11 {

	std::ostream& operator<<(std::ostream& os, const Teacher& teacher)
	{
		std::string gradeStr;
		switch (teacher.getGrade())
		{
		case 0:
			gradeStr = "Kindergarten";
			break;
		case 1:
			gradeStr = "Primary";
			break;
		case 2:
			gradeStr = "Secondary";
			break;
		case 3:
			gradeStr = "University";
			break;
		}

		os << teacher.getName() << " " << teacher.getLastName() << " "
			<< teacher.getDNI() << " " << teacher.getEmployer() << " "
			<< teacher.getSalary() << " " << gradeStr;

		return os;
	}
}