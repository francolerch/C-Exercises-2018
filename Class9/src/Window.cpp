#include "Window.h"

namespace cpp_class9 {
	const Window& Window::operator=(const Window& window)
	{
		if (this == &window)
			return *this;

		Rectangle::operator=(window);
		m_Style = window.m_Style;

		return *this;
	}
}