#include "BirthDate.h"

namespace cpp_class7 {
	BirthDate::BirthDate(unsigned int m_Day, unsigned int m_Month, unsigned int m_Year)
		: m_Day(m_Day), m_Month(m_Month), m_Year(m_Year)
	{
	}

	BirthDate::BirthDate(const BirthDate& m_BirthDate)
		: m_Day(m_BirthDate.m_Day), m_Month(m_BirthDate.m_Month), m_Year(m_BirthDate.m_Year)
	{
	}

	const std::string BirthDate::toString() const
	{
		return std::to_string(m_Year) + "/" + std::to_string(m_Day) + "/" + std::to_string(m_Month);
	}

	BirthDate::ZodiacSign BirthDate::getZodiacSign() const
	{
		ZodiacSign sign;

		switch (m_Month)
		{
		case 1:
		{
			sign = (m_Day <= 19) ? Capricorn : Aquarius;
			break;
		}
		case 2:
		{
			sign = (m_Day <= 18) ? Aquarius : Pisces;
			break;
		}
		case 3:
		{
			sign = (m_Day <= 20) ? Pisces : Aries;
			break;
		}
		case 4:
		{
			sign = (m_Day <= 19) ? Aries : Taurus;
			break;
		}
		case 5:
		{
			sign = (m_Day <= 20) ? Taurus : Gemini;
			break;
		}
		case 6:
		{
			sign = (m_Day <= 20) ? Gemini : Cancer;
			break;
		}
		case 7:
		{
			sign = (m_Day <= 22) ? Cancer : Leo;
			break;
		}
		case 8:
		{
			sign = (m_Day <= 22) ? Leo : Virgo;
			break;
		}
		case 9:
		{
			sign = (m_Day <= 22) ? Virgo : Libra;
			break;
		}
		case 10:
		{
			sign = (m_Day <= 22) ? Libra : Scorpio;
			break;
		}
		case 11:
		{
			sign = (m_Day <= 21) ? Scorpio : Sagittarius;
			break;
		}
		case 12:
		{
			sign = (m_Day <= 19) ? Sagittarius : Capricorn;
			break;
		}
		default:
			break;
		}

		return sign;
	};

	unsigned int BirthDate::getAge() const
	{
		if (m_Month == 1 && m_Day == 1)
			return 2019 - m_Year;
		return 2019 - m_Year - 1;
	}
}