#include "City.h"

namespace cpp_class7 {

	City::City(const unsigned int maxPop) :
		m_maxPop(maxPop), m_lastPop(0)
	{
		m_citizen = new Citizen[maxPop];
	}

	City::City(const City& city) :
		m_maxPop(city.m_maxPop), m_lastPop(city.m_lastPop)
	{
		m_citizen = new Citizen[m_maxPop];

		for (unsigned int i = 0; i < m_lastPop; i++)
		{
			m_citizen[i] = city.m_citizen[i];
		}
	}

	City::~City()
	{
		delete[] m_citizen;
	}

	bool City::addCitizen(const Citizen citizen)
	{
		if (m_lastPop < m_maxPop)
		{
			for (unsigned int i = 0; i <= m_lastPop; i++)
			{
				if (m_citizen[i].getName().compare(citizen.getName()) == 0 &&
					m_citizen[i].getLastName().compare(citizen.getLastName()) == 0)
				{
					return false;
				}
			}
		
			m_citizen[m_lastPop] = citizen;
			m_lastPop++;

			return true;
		}
		
		return false;
	}

	unsigned int City::getRetiredCount() const
	{
		unsigned int retiredCount = 0;

		for (unsigned int i = 0; i < m_lastPop; i++)
		{
			if (m_citizen[i].isRetired())
			{
				retiredCount++;
			}
		}

		return retiredCount;
	}

	unsigned int City::getChildCount() const
	{ 
		unsigned int childCount = 0;

		for (unsigned int i = 0; i < m_lastPop; i++)
		{
			if (m_citizen[i].isChild())
			{
				childCount++;
			}
		}

		return childCount;
	}

	unsigned int City::getTeenagerCount() const
	{
		unsigned int teenagerCount = 0;

		for (unsigned int i = 0; i < m_lastPop; i++)
		{
			if (m_citizen[i].isTeenager())
			{
				teenagerCount++;
			}
		}

		return teenagerCount;
	}

	unsigned int City::getManCount() const
	{
		unsigned int maleCount = 0;

		for (unsigned int i = 0; i < m_lastPop; i++)
		{
			if (m_citizen[i].getGender() == Citizen::Gender::MALE)
			{
				maleCount++;
			}
		}

		return maleCount;
	}

	unsigned int City::getWomanCount() const
	{
		unsigned int femaleCount = 0;

		for (unsigned int i = 0; i < m_lastPop; i++)
		{
			if (m_citizen[i].getGender() == Citizen::Gender::FEMALE)
			{
				femaleCount++;
			}
		}

		return femaleCount;
	}

	Citizen* City::getCitizenByName(const std::string name, const std::string lastName) const
	{
		for (unsigned int i = 0; i < m_lastPop; i++)
		{
			if (m_citizen[i].getName().compare(name) == 0 && m_citizen[i].getLastName().compare(lastName) == 0)
			{
				return &m_citizen[i];
			}
		}

		return nullptr;
	}
}