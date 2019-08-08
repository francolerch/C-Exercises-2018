#include "Window.h"

namespace cpp_class9 {
	const Window& Window::operator=(const Window& window)
	{
		if (this == &window)
			return *this;

		m_Width = window.m_Width;
		m_Height = window.m_Height;
		m_Style = window.m_Style;

		return *this;
	}
}