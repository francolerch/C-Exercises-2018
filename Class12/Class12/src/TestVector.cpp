#include "TestVector.h"
#include "Vector.h"

#include <iostream>
#include <assert.h>

namespace cpp_class12_test {
	using namespace cpp_class12;

	void TestVector::runTests() const
	{
		std::cout << std::endl;
		std::cout << "TestVector Tests:" << std::endl;
		std::cout << std::endl;

		TestConstructor();
		TestCopyConstructor();
		TestPushBack();
		TestAssignOperator();
		TestSize();
		TestEmpty();
		TestSubscriptOperator();
		TestPopBack();
	}

	void TestVector::TestConstructor() const
	{
		Vector<int> v;

		assert(v.m_Struct != nullptr);
		assert(v.m_SizeAllocated == 1);
		assert(v.m_NextIndex == 0);

		std::cout << "TestConstructor Test Passed!" << std::endl;
	}

	void TestVector::TestCopyConstructor() const
	{
		Vector<float> v;

		v.push_back(2.2f);
		v.push_back(3.0f);

		Vector<float> v2(v);

		assert(v2.m_SizeAllocated == v.m_SizeAllocated);
		assert(v2.m_NextIndex == v.m_NextIndex);
		assert(v2.m_Struct != v.m_Struct);

		for (size_t i = 0; i < v2.m_NextIndex; i++)
		{
			assert(v2.m_Struct[i] == v.m_Struct[i]);
		}

		std::cout << "TestCopyConstructor Test Passed!" << std::endl;
	}

	void TestVector::TestAssignOperator() const
	{
		Vector<float> v;
		Vector<float> v2;

		v.push_back(1);
		v = v2;

		assert(v2.m_SizeAllocated == v.m_SizeAllocated);
		assert(v2.m_NextIndex == v.m_NextIndex);

		for (size_t i = 0; i < v2.m_NextIndex; i++)
		{
			assert(v2.m_Struct[i] == v.m_Struct[i]);
		}

		std::cout << "TestAssignOperator Test Passed!" << std::endl;
	}

	void TestVector::TestSize() const
	{
		Vector<int> v;

		assert(v.size() == 0);

		v.push_back(1);
		v.push_back(1);
		v.push_back(1);

		assert(v.size() == 3);

		std::cout << "TestSize Test Passed!" << std::endl;
	}

	void TestVector::TestEmpty() const
	{
		Vector<int> v;

		assert(v.empty());

		v.push_back(1);
		assert(!v.empty());

		std::cout << "TestEmpty Test Passed!" << std::endl;
	}

	void TestVector::TestPushBack() const
	{
		Vector<int> v;

		v.push_back(0);
		v.push_back(1);
		v.push_back(2);

		assert(v.m_SizeAllocated == 4);
		assert(v.m_NextIndex == 3);
		assert(v.m_Struct[0] == 0);
		assert(v.m_Struct[1] == 1);
		assert(v.m_Struct[2] == 2);

		std::cout << "TestPushBack Test Passed!" << std::endl;
	}

	void TestVector::TestSubscriptOperator() const
	{
		Vector<int> v;

		v.push_back(0);
		v.push_back(1);
		v.push_back(2);

		for (unsigned int i = 0; i < v.size(); i++)
		{
			assert(v.m_Struct[i] == v[i]);
		}

		std::cout << "TestSubscriptOperator Test Passed!" << std::endl;
	}

	void TestVector::TestPopBack() const
	{
		Vector<int> v;

		v.push_back(0);
		v.push_back(1);
		v.push_back(2);

		v.pop_back();
		v.pop_back();

		assert(v[0] == 0);
		assert(v.m_SizeAllocated == 4);
		assert(v.m_NextIndex == 1);

		std::cout << "TestPopBack Test Passed!" << std::endl;
	}
}