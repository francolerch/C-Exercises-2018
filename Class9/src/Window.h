#pragma once
#include "Rectangle.h"

namespace cpp_class9_test {
	class TestWindow;
}

namespace cpp_class9 {

	class Window : public Rectangle
	{
		friend cpp_class9_test::TestWindow;

	public:
		enum Style {
			FENG_SHUI,
			CHINESE,
			MODERN
		};

	protected:
		Style m_Style;

	public:
		Window(const unsigned int height, const unsigned int width, Style style)
			: Rectangle(height, width), m_Style(style) {};
		Window(const Window& window)
			: Rectangle(window.getHeight(), window.getWidth()), m_Style(window.m_Style) {};

		inline Style getStyle() const { return m_Style; };

		const Window& operator=(const Window& door);
	};
}