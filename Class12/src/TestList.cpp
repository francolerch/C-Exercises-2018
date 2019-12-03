#include "TestList.h"
#include "List.h"

#include <assert.h>
#include <iostream>

namespace cpp_class12_test {
	using namespace cpp_class12;

	void TestList::runTests() const
	{
		std::cout << std::endl;
		std::cout << "TestList Tests:" << std::endl;
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

	void TestList::TestConstructor() const
	{
		List<int> l;

		assert(l.m_Head == nullptr);
		assert(l.m_Size == 0);

		std::cout << "TestConstructor Test Passed!" << std::endl;
	}

	void TestList::TestCopyConstructor() const
	{
		List<int> l;

		l.push_back(1);
		l.push_back(2);
		l.push_back(3);

		List<int> l2(l);

		assert(l2.m_Size == l.m_Size);
		assert(l2.m_Head != l.m_Head);
		assert(l2.m_Head->next != l.m_Head->next);
		assert(l2.m_Head->next->prev == l2.m_Head);

		for (unsigned int i = 0; i < l2.m_Size; i++)
		{
			assert(l[i] == l2[i]);
		}

		std::cout << "TestCopyConstructor Test Passed!" << std::endl;
	}

	void TestList::TestAssignOperator() const
	{
		List<int> l;

		l.push_back(1);
		l.push_back(2);
		l.push_back(3);

		List<int> l2;
		l2 = l;

		assert(l2.m_Size == l.m_Size);
		assert(l2.m_Head != l.m_Head);
		assert(l2.m_Head->next != l.m_Head->next);
		assert(l2.m_Head->next->prev == l2.m_Head);

		for (unsigned int i = 0; i < l2.m_Size; i++)
		{
			assert(l[i] == l2[i]);
		}

		std::cout << "TestAssignOperator Test Passed!" << std::endl;
	}

	void TestList::TestSize() const
	{
		List<float> l;

		l.push_back(1.1f);
		l.push_back(13.0f);
		l.push_back(1.0f);
		l.push_back(2.0f);
		l.pop_back();

		assert(l.size() == 3);

		std::cout << "TestSize Test Passed!" << std::endl;
	}

	void TestList::TestEmpty() const
	{
		List<float> l;

		assert(l.empty());

		l.push_back(1.1f);

		assert(!l.empty());

		std::cout << "TestEmpty Test Passed!" << std::endl;
	}

	void TestList::TestPushBack() const
	{
		List<int> l;

		l.push_back(0);
		l.push_back(1);
		l.push_back(2);

		assert(l.m_Head->data == 0);
		assert(l.m_Head->next->data == 1);
		assert(l.m_Head->next->next->data == 2);
		assert(l.m_Head->next->prev == l.m_Head);
		assert(l.m_Head->next == l.m_Head->next->next->prev);

		std::cout << "TestPushBack Test Passed!" << std::endl;
	}

	void TestList::TestSubscriptOperator() const
	{
		List<int> l;

		l.push_back(0);
		l.push_back(1);
		l.push_back(2);

		assert(l[0] == 0);
		assert(l[1] == 1);
		assert(l[2] == 2);

		std::cout << "TestSubscriptOperator Test Passed!" << std::endl;
	}

	void TestList::TestPopBack() const
	{
		List<int> l;

		l.push_back(0);
		l.push_back(1);
		l.pop_back();

		assert(l.size() == 1);
		assert(l.m_Head->next == nullptr);
		assert(l.m_Head->prev == nullptr);

		l.pop_back();

		assert(l.size() == 0);
		assert(l.m_Head == nullptr);

		std::cout << "TestSubscriptOperator Test Passed!" << std::endl;
	}
}