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
		Citizen(const BirthDate& birthDate, std::string name, std::string lastName, Gender gender);
		Citizen(const Citizen& citizen);

		inline BirthDate getBirthDate() const { return m_birthDate; };
		inline std::string getName() const { return m_name; };
		inline std::string getLastName() const { return m_lastName; };
		inline Gender getGender() const { return m_gender; };

		bool isAdult();
		bool isTeenager();
		bool isChild();
		bool isRetired();

	private:
		BirthDate m_birthDate;
		std::string m_name;
		std::string m_lastName;
		Gender m_gender;
	};
}