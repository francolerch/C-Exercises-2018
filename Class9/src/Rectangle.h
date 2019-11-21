#pragma once

namespace cpp_class9_test {
	class TestRectangle;
}

namespace cpp_class9 {
	class Rectangle {
		friend cpp_class9_test::TestRectangle;

	protected:
		unsigned int m_Height, m_Width;
	public:
		Rectangle(const unsigned int height, const unsigned int width)
			: m_Height(height), m_Width(width) {};
		Rectangle(const Rectangle& rectangle)
			: m_Height(rectangle.m_Height), m_Width(rectangle.m_Width) {};

		unsigned int getHeight() const { return m_Height; };
		unsigned int getWidth() const { return m_Width; };

		const Rectangle& operator=(const Rectangle& rectangle);
		unsigned int getArea() const;
	};
}