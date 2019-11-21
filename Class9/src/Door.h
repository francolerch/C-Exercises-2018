#pragma once
#include "Rectangle.h"

namespace cpp_class9_test {
	class TestDoor;
}
namespace cpp_class9 {
	class Door : public Rectangle
	{
		friend cpp_class9_test::TestDoor;

	public:
		enum Material {
			WOOD,
			METAL,
			GLASS
		};

	private:
		Material m_Material;

	public:
		Door(const unsigned int height, const unsigned int width, const Material material)
			: Rectangle(height, width), m_Material(material) {};
		Door(const Door& door)
			: Rectangle(door.getHeight(), door.getWidth()), m_Material(door.m_Material) {};

		Material getMaterial() const { return m_Material; };

		const Door& operator=(const Door& door);
	};
}