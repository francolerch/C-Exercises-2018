#include "Doctor.h"

std::ostream& cpp_class11::operator<<(std::ostream& os, const Doctor& doctor)
{
	std::string specialtyStr;
	switch (doctor.getSpecialty())
	{
	case 0:
		specialtyStr = "Psychiatry";
		break;
	case 1:
		specialtyStr = "Dermatology";
		break;
	case 2:
		specialtyStr = "Anesthesiology";
		break;
	case 3:
		specialtyStr = "Cardiology";
		break;
	}

	os << doctor.getName() << " " << doctor.getLastName() << " "
		<< doctor.getDNI() << " " << doctor.getEmployer() << " "
		<< doctor.getSalary() << " " << specialtyStr;

	return os;
}
