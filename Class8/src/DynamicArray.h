#pragma once
#include <iostream>

namespace cpp_class8_test {
	class TestDynamicArray;
}

namespace cpp_class8 {

	class DynamicArray
	{
		friend cpp_class8_test::TestDynamicArray;
		friend std::ostream& operator<<(std::ostream& os, const DynamicArray& arr);

	private:
		int* m_DynamicArray;
		size_t m_Size;

	public:
		DynamicArray(const size_t size);
		DynamicArray(const DynamicArray& array);
		~DynamicArray();

		inline size_t GetSize() const { return m_Size; };

		int& operator[](const size_t index);
		const DynamicArray& operator+=(const DynamicArray& arr);
		const DynamicArray& operator+(const DynamicArray& arr);
		const bool operator==(const DynamicArray& arr) const;
		const bool operator!=(const DynamicArray& arr) const;
	};
}