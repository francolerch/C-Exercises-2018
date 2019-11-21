#include "DynamicArray.h"
#include <assert.h>

namespace cpp_class8 {
	DynamicArray::DynamicArray(const size_t size)
		: m_Size(size), m_DynamicArray(nullptr)
	{
		m_DynamicArray = new int[size];

		for (size_t i = 0; i < size; i++)
		{
			m_DynamicArray[i] = -1;
		}
	}

	DynamicArray::DynamicArray(const DynamicArray& arr)
		: m_Size(arr.m_Size)
	{
		m_DynamicArray = new int[m_Size];

		for (size_t i = 0; i < m_Size; i++)
		{
			m_DynamicArray[i] = -1;
		}

		for (size_t i = 0; i < m_Size; i++)
			m_DynamicArray[i] = arr.m_DynamicArray[i];
	}

	DynamicArray::~DynamicArray()
	{
		delete[] m_DynamicArray;
	}

	int& DynamicArray::operator[](const size_t index)
	{
		assert(index <= m_Size);
		return m_DynamicArray[index];
	}

	DynamicArray& DynamicArray::operator+=(const DynamicArray& arr)
	{
		int* concat = new int[m_Size + arr.m_Size];

		for (size_t i = 0; i < m_Size; i++)
		{
			concat[i] = m_DynamicArray[i];
		}
		for (size_t i = 0; i < arr.m_Size; i++)
		{
			concat[i + m_Size] = arr.m_DynamicArray[i];
		}

		delete[] m_DynamicArray;
		m_DynamicArray = concat;

		return *this;
	}

	DynamicArray& DynamicArray::operator+(const DynamicArray& arr)
	{
		DynamicArray* clone = new DynamicArray(m_Size + arr.m_Size);

		for (size_t i = 0; i < m_Size; i++)
		{
			(*clone)[i] = m_DynamicArray[i];
		}

		for (size_t i = 0; i < arr.m_Size; i++)
		{
			(*clone)[i + m_Size] = arr.m_DynamicArray[i];
		}

		return *clone;
	}

	bool DynamicArray::operator==(const DynamicArray& arr) const
	{
		if (m_Size != arr.m_Size) return false;

		for (size_t i = 0; i < m_Size; i++)
		{
			if (m_DynamicArray[i] != arr.m_DynamicArray[i])
				return false;
		}

		return true;
	}

	bool DynamicArray::operator!=(const DynamicArray& arr) const
	{
		return !operator==(arr);
	}

	std::ostream& operator<<(std::ostream& os, const DynamicArray& arr)
	{
		os << "[";

		for (size_t i = 0; i < arr.m_Size; i++)
		{
			os << arr.m_DynamicArray[i];

			if (i != arr.m_Size - 1)
				os << ", ";
		}

		os << "]";

		return os;
	}
}