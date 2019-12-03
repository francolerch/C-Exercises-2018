#pragma once
#include "IContainer.h"
#include <assert.h>

namespace cpp_class12 {
	template<typename T>
	struct Node
	{
		T data;
		Node* prev = nullptr;
		Node* next = nullptr;
	};

	template<typename T>
	class List : public IContainer<T> {
	public:
		friend cpp_class12_test::TestList;

	private:
		Node<T>* m_Head = nullptr;
		size_t m_Size = 0;

	public:
		List();
		List(const List<T>& l);
		~List();
		const List<T>& operator=(const List<T>& l);
		size_t size() const override;
		bool empty() const override;
		void push_back(const T& src) override;
		T& operator[](const unsigned int index) override;
		T pop_back() override;
	private:
		Node<T>* getNodeAt(const unsigned int index);
	};

	template<typename T>
	List<T>::List()
	{
	}

	template<typename T>
	List<T>::List(const List<T>& l)
		: m_Size(l.m_Size)
	{
		m_Head = new Node<T>;
		Node<T>* localNode = m_Head;

		Node<T>* node = l.m_Head;
		Node<T>* prev = nullptr;

		while (node != nullptr)
		{
			localNode->data = node->data;
			localNode->prev = prev;
			localNode->next = nullptr;

			if (node->next != nullptr)
				localNode->next = new Node<T>;

			prev = localNode;
			localNode = localNode->next;
			node = node->next;
		}
	}

	template<typename T>
	List<T>::~List()
	{
		Node<T>* next = m_Head;
		Node<T>* cur = nullptr;

		while (next != nullptr) {
			cur = next;
			next = next->next;
			delete cur;
		}
	}

	template<typename T>
	const List<T>& List<T>::operator=(const List<T>& l)
	{
		if (this == &l)
			return *this;

		m_Size = l.m_Size;

		m_Head = new Node<T>;
		Node<T>* localNode = m_Head;

		Node<T>* node = l.m_Head;
		Node<T>* prev = nullptr;

		while (node != nullptr)
		{
			localNode->data = node->data;
			localNode->prev = prev;
			localNode->next = nullptr;

			if (node->next != nullptr)
				localNode->next = new Node<T>;

			prev = localNode;
			localNode = localNode->next;
			node = node->next;
		}

		return *this;
	}

	template<typename T>
	size_t List<T>::size() const
	{
		return m_Size;
	}

	template<typename T>
	bool List<T>::empty() const
	{
		return m_Size == 0;
	}

	template<typename T>
	void List<T>::push_back(const T& src)
	{
		if (m_Head == nullptr)
		{
			m_Head = new Node<T>;
			m_Head->data = src;
		}
		else {
			Node<T>* last = getNodeAt(static_cast<unsigned int>(m_Size - 1));

			Node<T>* node = new Node<T>;
			node->data = src;
			node->prev = last;
			last->next = node;
		}

		m_Size++;
	}

	template<typename T>
	T& List<T>::operator[](const unsigned int index)
	{
		assert(index < m_Size);

		Node<T>* node = getNodeAt(static_cast<unsigned int>(index));

		return node->data;
	}

	template<typename T>
	T List<T>::pop_back()
	{
		assert(m_Size > 0);

		Node<T>* last = getNodeAt(static_cast<unsigned int>(m_Size) - 1);

		assert(last != nullptr);

		T data = last->data;

		if (last->prev != nullptr)
			last->prev->next = nullptr;

		delete last;

		if (--m_Size == 0)
			m_Head = nullptr;

		return data;
	}

	template<typename T>
	Node<T>* List<T>::getNodeAt(const unsigned int index)
	{
		assert(m_Head != nullptr);
		assert(index < m_Size);

		Node<T>* next = m_Head;
		Node<T>* curr = nullptr;

		for (unsigned int i = 0; i <= index; i++)
		{
			curr = next;
			next = next->next;

			if (next == nullptr)
				return curr;
		}

		return curr;
	}
}