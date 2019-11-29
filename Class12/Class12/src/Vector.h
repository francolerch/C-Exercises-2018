#pragma once
#include <assert.h>
#include "IContainer.h"

namespace cpp_class12 {
	template<typename T>
	class Vector : public IContainer<T> {
		friend cpp_class12_test::TestVector;
	private:
		T* m_Struct;
		size_t m_SizeAllocated = 1;
		size_t m_NextIndex = 0;
	public:
		Vector() { m_Struct = new T[1]; };
		Vector(const Vector<T>&);
		~Vector() { delete[] m_Struct; };
		const Vector<T>& operator=(const Vector<T>& vec);
		size_t size() const override { return m_NextIndex; };
		bool empty() const override { return m_NextIndex == 0; };
		void push_back(const T& src) override;
		T& operator[](const unsigned int index) override;
		T pop_back() override;
	};

	template<typename T>
	Vector<T>::Vector(const Vector<T>& vec)
		: m_SizeAllocated(vec.m_SizeAllocated), m_NextIndex(vec.m_NextIndex)
	{
		assert(m_SizeAllocated > 0);
		assert(m_NextIndex >= 0);
		assert(vec.m_Struct != nullptr);

		m_Struct = new T[m_SizeAllocated];

		for (size_t i = 0; i < m_SizeAllocated; i++)
			m_Struct[i] = vec.m_Struct[i];
	}

	template<typename T>
	const Vector<T>& Vector<T>::operator=(const Vector<T>& vec)
	{
		if (this == &vec)
			return *this;

		delete[] m_Struct;

		m_SizeAllocated = vec.m_SizeAllocated;
		m_NextIndex = vec.m_NextIndex;
		m_Struct = new T[m_SizeAllocated];

		for (size_t i = 0; i < m_NextIndex; i++)
		{
			m_Struct[i] = vec.m_Struct[i];
		}

		return *this;
	}

	template<typename T>
	void Vector<T>::push_back(const T& src)
	{
		if (m_NextIndex < m_SizeAllocated)
		{
			m_Struct[m_NextIndex++] = src;
		}
		else
		{
			T* temp = new T[m_SizeAllocated *= 2];

			for (size_t i = 0; i < m_SizeAllocated / 2; i++)
			{
				temp[i] = m_Struct[i];
			}

			temp[m_NextIndex++] = src;

			delete[] m_Struct;
			m_Struct = temp;
		}
	}

	template<typename T>
	T& Vector<T>::operator[](const unsigned int index)
	{
		assert(index <= m_NextIndex);

		return m_Struct[index];
	}

	template<typename T>
	T Vector<T>::pop_back()
	{
		assert(m_NextIndex >= 0);

		return m_Struct[m_NextIndex--];
	}
};