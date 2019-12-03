#pragma once
#include <vector>
#include <assert.h>
#include "Container.h"

namespace cpp_class13 {

	template<typename T>
	class Stack : public virtual Container<std::vector<T>> {
		friend cpp_class13_test::TestStack;
	public:
		Stack() {};
		~Stack() {};
		T pop();
		void push(const T& elem);
	};

	template<typename T>
	T Stack<T>::pop()
	{
		T temp = this->m_Struct.at(this->m_Struct.size() - 1);
		this->m_Struct.pop_back();

		return temp;
	}

	template<typename T>
	void Stack<T>::push(const T& elem)
	{
		this->m_Struct.push_back(elem);
	}
}