#pragma once
#include <iostream>
#include "Citizen.h"

namespace cpp_class7_test {
	class TestCity;
}

namespace cpp_class7 {
	class City {
		friend cpp_class7_test::TestCity;
	public:
		City(const unsigned int maxPop);
		City(const City& city);
		~City();

		bool addCitizen(const Citizen citizen);
		unsigned int getRetiredCount() const;
		unsigned int getChildCount() const;
		unsigned int getTeenagerCount() const;
		unsigned int getManCount() const;
		unsigned int getWomanCount() const;
		Citizen* getCitizenByName(const std::string name, const std::string lastName) const;

	private:
		Citizen* m_citizen;
		unsigned int m_maxPop;
		unsigned int m_lastPop;

	};
}