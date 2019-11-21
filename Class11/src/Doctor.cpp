#include "Doctor.h"

std::ostream& cpp_class11::operator<<(std::ostream& os, const Doctor& doctor)
{
	std::string specialtyStr;
	switch (doctor.getSpecialty())
	{
	case Doctor::Specialty::PSYCHIATRY:
		specialtyStr = "Psychiatry";
		break;
	case Doctor::Specialty::DERMATOLOGY:
		specialtyStr = "Dermatology";
		break;
	case Doctor::Specialty::ANESTHESIOLOGY:
		specialtyStr = "Anesthesiology";
		break;
	case Doctor::Specialty::CARDIOLOGY:
		specialtyStr = "Cardiology";
		break;
	}

	os << doctor.getName() << " " << doctor.getLastName() << " "
		<< doctor.getDNI() << " " << doctor.getEmployer() << " "
		<< doctor.getSalary() << " " << specialtyStr;

	return os;
}