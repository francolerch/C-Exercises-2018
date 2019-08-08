#include "House.h"

namespace cpp_class9 {

	unsigned int House::getDoorArea() const
	{
		return m_Door.getArea();
	}

	unsigned int House::getTotalWindowArea() const
	{
		return (
			m_Window1.getArea() +
			m_Window2.getArea() +
			m_Window3.getArea() +
			m_Window4.getArea()
			);
	}

	const House& House::operator=(const House& house)
	{
		if (this == &house)
			return *this;

		m_Window1 = house.m_Window1;
		m_Window2 = house.m_Window2;
		m_Window3 = house.m_Window3;
		m_Window4 = house.m_Window4;
		m_Door = house.m_Door;

		return *this;
	}

	std::ostream& operator<<(std::ostream& os, const House& house)
	{
		os << "Door: " << house.m_Door.getWidth() << " x " << house.m_Door.getHeight() << std::endl;
		os << "Window 1: " << house.m_Window1.getWidth() << " x " << house.m_Window1.getHeight() << std::endl;
		os << "Window 2: " << house.m_Window2.getWidth() << " x " << house.m_Window2.getHeight() << std::endl;
		os << "Window 3: " << house.m_Window3.getWidth() << " x " << house.m_Window3.getHeight() << std::endl;
		os << "Window 4: " << house.m_Window4.getWidth() << " x " << house.m_Window4.getHeight() << std::endl;

		return os;
	}
}