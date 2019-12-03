#pragma once

namespace cpp_class13_test {
	class TestQueue
	{
	public:
		void runTests() const;

	private:
		void testDequeue() const;
		void testEnqueue() const;
	};
}