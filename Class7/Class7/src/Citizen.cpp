#include "Citizen.h"

namespace cpp_class7 {
	Citizen::Citizen(const BirthDate& birthDate, const std::string& name, const std::string& lastName, const Gender& gender) :
		m_birthDate(birthDate), m_name(name), m_lastName(lastName), m_gender(gender)
	{
	};

	Citizen::Citizen(const Citizen& citizen) :
		m_birthDate(citizen.m_birthDate), m_name(citizen.m_name), m_lastName(citizen.m_lastName), m_gender(citizen.m_gender)
	{
	};

	bool Citizen::isAdult() const
	{
		return (m_birthDate.getAge() >= 18);
	}

	bool Citizen::isTeenager() const
	{
		return (m_birthDate.getAge() >= 11 && m_birthDate.getAge() <= 17);
	}

	bool Citizen::isChild()const
	{
		return (m_birthDate.getAge() < 11);
	}

	bool Citizen::isRetired()const
	{
		return ((m_birthDate.getAge() > 60 && m_gender == Gender::FEMALE) ||
			(m_birthDate.getAge() > 65 && m_gender == Gender::MALE));
	}
}