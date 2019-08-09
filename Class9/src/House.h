#pragma once
#include "Window.h"
#include "Door.h"
#include <iostream>

namespace cpp_class9_test {
	class TestHouse;
}

namespace cpp_class9 {

	class House
	{
		friend cpp_class9_test::TestHouse;
		friend std::ostream& operator<<(std::ostream& os, const House& house);

	public:
		enum Material {
			WOOD,
			METAL,
			GLASS
		};

	private:
		Window m_Window1, m_Window2, m_Window3, m_Window4;
		Door m_Door;

	public:
		House(const Window& window1, const Window& window2, const Window& window3, const Window& window4, const Door& door)
			: m_Window1(window1),
			m_Window2(window2), 
			m_Window3(window3), 
			m_Window4(window4), 
			m_Door(door)
		{
		};
		House(const House& house)
			: m_Window1(house.m_Window1),
			m_Window2(house.m_Window2),
			m_Window3(house.m_Window3),
			m_Window4(house.m_Window4),
			m_Door(house.m_Door)
		{
		}

		unsigned int getDoorArea() const;
		unsigned int getTotalWindowArea() const;

		const House& operator=(const House& house);
	};
}