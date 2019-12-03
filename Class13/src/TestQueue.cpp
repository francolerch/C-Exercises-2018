#include "TestQueue.h"
#include "Queue.h"

#include <iostream>
#include <assert.h>

namespace cpp_class13_test {
	using namespace cpp_class13;

	void TestQueue::runTests() const
	{
		std::cout << std::endl;
		std::cout << "TestQueue Tests:" << std::endl;
		std::cout << std::endl;

		testEnqueue();
		testDequeue();
	}

	void TestQueue::testDequeue() const
	{
		Queue<int> q;

		q.m_Struct.push_front(1);
		q.m_Struct.push_front(2);
		q.m_Struct.push_front(3);

		q.dequeue();

		assert(q.m_Struct.back() == 2);
		assert(q.m_Struct.front() == 3);

		std::cout << "testDequeue Test Passed!" << std::endl;
	}

	void TestQueue::testEnqueue() const
	{
		Queue<int> q;
	
		q.enqueue(1);
		q.enqueue(2);
		q.enqueue(3);

		assert(q.m_Struct.front() == 3);
		assert(q.m_Struct.back() == 1);

		std::cout << "testEnqueue Test Passed!" << std::endl;
	}
}