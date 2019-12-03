#pragma once
#include "Container.h"
#include <assert.h>
#include <list>

namespace cpp_class13 {

	template<typename T>
	class Queue : public virtual Container<std::list<T>> {
		friend cpp_class13_test::TestQueue;

	public:
		Queue() {};
		~Queue() {};
		void dequeue();
		void enqueue(const T& elem);
	};

	template<typename T>
	void Queue<T>::dequeue()
	{
		this->m_Struct.pop_back();

	}

	template<typename T>
	void Queue<T>::enqueue(const T& elem)
	{
		this->m_Struct.push_front(elem);
	}
}