#include "Door.h"

namespace cpp_class9 {

	const Door& Door::operator=(const Door& door)
	{
		if (this == &door)
			return *this;

		m_Width = door.m_Width;
		m_Height = door.m_Height;
		m_Material = door.m_Material;

		return *this;
	}
}