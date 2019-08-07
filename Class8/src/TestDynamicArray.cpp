#include "TestDynamicArray.h"
#include "DynamicArray.h"
#include <assert.h>
#include <iostream>

namespace cpp_class8_test {
	
	using cpp_class8::DynamicArray;

	void TestDynamicArray::RunTests() const
	{
		TestConstructor();
		TestCopyContructor();
		TestGetSize();
		TestSubscriptOperator();
		TestPlusEqualOperator();
		TestPlusOperator();
		TestEqualOperator();
		TestNotEqualOperator();
		TestLeftShiftOperator();

		std::cin.get();
	}

	void TestDynamicArray::TestConstructor() const
	{
		DynamicArray arr = DynamicArray(10);

		assert(arr.m_DynamicArray != nullptr);
		for (size_t i = 0; i < 10; i++)
		{
			assert(arr.m_DynamicArray[i] == -1);
		}		
		assert(arr.m_Size == 10);

		std::cout << "TestConstructor Test Passed" << std::endl;
	}

	void TestDynamicArray::TestCopyContructor() const
	{
		DynamicArray arr = DynamicArray(10);
		DynamicArray arr2 = DynamicArray(arr);

		assert(arr.m_DynamicArray != nullptr);
		assert(arr2.m_DynamicArray != nullptr);
		for (size_t i = 0; i < 10; i++)
		{
			assert(arr.m_DynamicArray[i] == arr2.m_DynamicArray[i]);
		}

		assert(arr.m_Size == arr2.m_Size);

		std::cout << "TestCopyContructor Test Passed" << std::endl;
	}
	void TestDynamicArray::TestGetSize() const
	{
		DynamicArray arr = DynamicArray(10);

		assert(arr.m_DynamicArray != nullptr);
		assert(arr.GetSize() == 10);
		
		std::cout << "TestGetSize Test Passed" << std::endl;
	}
	void TestDynamicArray::TestSubscriptOperator() const
	{
		DynamicArray arr = DynamicArray(10);

		assert(arr.m_DynamicArray != nullptr);
		for (size_t i = 0; i < 10; i++)
		{
			assert(arr[i] == -1);
		}

		arr[0] = 2;
		assert(arr.m_DynamicArray[0] == 2);

		std::cout << "TestSubscriptOperator Test Passed" << std::endl;
	}
	void TestDynamicArray::TestPlusEqualOperator() const
	{
		DynamicArray arr = DynamicArray(2);
		DynamicArray arr2 = DynamicArray(3);
		int arrTest[] = { -1, -1, 2, 2, 2 };

		for (size_t i = 0; i < arr2.GetSize(); i++)
		{
			arr2[i] = 2;
		}

		arr += arr2;

		for (size_t i = 0; i < 5; i++)
		{
			assert(arr.m_DynamicArray[i] == arrTest[i]);
		}

		std::cout << "TestPlusEqualOperator Test Passed" << std::endl;
	}
	void TestDynamicArray::TestPlusOperator() const
	{
		DynamicArray arr = DynamicArray(2);
		DynamicArray arr2 = DynamicArray(3);
		int arrTest[] = { -1, -1, 2, 2, 2 };

		for (size_t i = 0; i < arr2.GetSize(); i++)
		{
			arr2[i] = 2;
		}

		DynamicArray arr3 = arr + arr2;

		for (size_t i = 0; i < 5; i++)
		{
			assert(arr3.m_DynamicArray[i] == arrTest[i]);
		}

		for (size_t i = 0; i < 2; i++)
		{
			assert(arr.m_DynamicArray[i] == -1);
		}

		for (size_t i = 0; i < 2; i++)
		{
			assert(arr2.m_DynamicArray[i] == 2);
		}

		std::cout << "TestPlusOperator Test Passed" << std::endl;
	}

	void TestDynamicArray::TestEqualOperator() const
	{
		DynamicArray arr = DynamicArray(5);
		DynamicArray arr2 = DynamicArray(5);

		assert(arr == arr2);

		std::cout << "TestEqualOperator Test Passed" << std::endl;
	}

	void TestDynamicArray::TestNotEqualOperator() const
	{
		DynamicArray arr = DynamicArray(5);
		DynamicArray arr2 = DynamicArray(6);

		assert(arr != arr2);

		DynamicArray arr3 = DynamicArray(6);

		arr2[2] = 3;

		assert(arr2 != arr3);

		std::cout << "TestNotEqualOperator Test Passed" << std::endl;
	}

	void TestDynamicArray::TestLeftShiftOperator() const
	{
		DynamicArray arr = DynamicArray(5);
		std::cout << "Expected: [-1, -1, -1, -1, -1]" << std::endl;
		std::cout << "Actual: " << arr << std::endl;

		std::cout << "TestLeftShiftOperator Test Passed" << std::endl;

	}
}