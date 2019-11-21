#pragma once
#include <string>

class TestBirthDate;

namespace cpp_class7 {
	class BirthDate {
		friend class TestBirthDate;
	public:
		enum ZodiacSign
		{
			Aries,
			Taurus,
			Gemini,
			Cancer,
			Leo,
			Virgo,
			Libra,
			Scorpio,
			Sagittarius,
			Capricorn,
			Aquarius,
			Pisces
		};

	public:
		BirthDate() : m_Day(1), m_Month(1), m_Year(2000) {};
		BirthDate(unsigned int m_Day, unsigned int m_Month, unsigned int m_Year);
		BirthDate(const BirthDate& m_BirthDate);

		unsigned int getDay() const { return m_Day; };
		unsigned int getMonth() const { return m_Month; };
		unsigned int getYear() const { return m_Year; };
		const std::string toString() const;
		ZodiacSign getZodiacSign() const;
		unsigned int getAge() const;

	private:
		unsigned int m_Day;
		unsigned int m_Month;
		unsigned int m_Year;
	};
}