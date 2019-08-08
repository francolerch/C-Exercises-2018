#include "Rectangle.h"

namespace cpp_class9 {

	const Rectangle& Rectangle::operator=(const Rectangle& rectangle)
	{
		if (this == &rectangle)
			return *this;

		m_Height = rectangle.m_Height;
		m_Width = rectangle.m_Width;

		return *this;
	}

	unsigned int Rectangle::getArea() const
	{
		return m_Width * m_Height;
	}
}