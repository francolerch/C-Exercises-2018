#pragma once
#include <string>
#include "BirthDate.h"

namespace cpp_class7 {
	class Citizen {
		friend class TestCitizen;
	public:
		enum Gender {
			MALE,
			FEMALE
		};

	public:
		Citizen() : m_gender(Gender::MALE) {};
		Citizen(const BirthDate& birthDate, const std::string& name, const std::string& lastName, const Gender& gender);
		Citizen(const Citizen& citizen);

		BirthDate getBirthDate() const { return m_birthDate; };
		const std::string getName() const { return m_name; };
		const std::string getLastName() const { return m_lastName; };
		Gender getGender() const { return m_gender; };

		bool isAdult() const;
		bool isTeenager() const;
		bool isChild() const;
		bool isRetired() const;

	private:
		BirthDate m_birthDate;
		std::string m_name;
		std::string m_lastName;
		Gender m_gender;
	};
}