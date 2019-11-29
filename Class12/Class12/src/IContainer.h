#pragma once
namespace cpp_class12 {
	template<typename T>
	class IContainer {
	public:
		virtual size_t size() const = 0;
		virtual bool empty() const = 0;
		virtual void push_back(const T& src) = 0;
		virtual T& operator[](const unsigned int index) = 0;
		virtual T pop_back() = 0;
	};
}