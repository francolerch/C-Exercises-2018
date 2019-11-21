#include "Door.h"

namespace cpp_class9 {
	const Door& Door::operator=(const Door& door)
	{
		if (this == &door)
			return *this;

		Rectangle::operator=(door);
		m_Material = door.m_Material;

		return *this;
	}
}