#include "Person.h"
#include <stdexcept>

namespace cpp_class11 {

	Person::Person(const std::string& name, const std::string& lastName, unsigned int dni)
		: m_Name(name), m_LastName(lastName)
	{
		if (dni < 1000000 || dni > 999999999)
			throw std::invalid_argument("dni out of range");

		m_DNI = dni;
	}

	std::ostream& operator<<(std::ostream& os, const Person& person)
	{
		os << person.getName() << " " << person.getLastName() << " " << person.getDNI();

		return os;
	}
}