#pragma once

namespace cpp_class12_test {
	class TestVector
	{
	public:
		void runTests() const;

	private:
		void TestConstructor() const;
		void TestCopyConstructor() const;
		void TestAssignOperator() const;
		void TestSize() const;
		void TestEmpty() const;
		void TestPushBack() const;
		void TestSubscriptOperator() const;
		void TestPopBack() const;
	};
}