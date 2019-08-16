#pragma once
#include <string>
#include <iostream>

namespace cpp_class11_test {
	class TestPerson;
}
namespace cpp_class11 {
	class Person {
		friend cpp_class11_test::TestPerson;
		friend std::ostream& operator<<(std::ostream& os, const Person& person);
	private:
		std::string m_Name, m_LastName;
		unsigned int m_DNI;

	public:
		Person(const std::string& name, const std::string& lastName, unsigned int dni);

		std::string getName() const { return m_Name; }
		std::string getLastName() const { return m_LastName; }
		unsigned int getDNI() const { return m_DNI; }
		void setName(std::string& name) { m_Name = name; }
		void setLastName(std::string& lastName) { m_Name = lastName; }
		void setDNI(unsigned int dni) { m_Name = dni; }
	};
}