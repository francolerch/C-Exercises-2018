#pragma once

namespace cpp_class8_test {

	class TestDynamicArray 
	{
	public:
		TestDynamicArray() {};
		~TestDynamicArray() {};

	public:
		void RunTests() const;

	private:
		void TestConstructor() const;
		void TestCopyContructor() const;
		void TestGetSize() const;
		void TestSubscriptOperator() const;
		void TestPlusEqualOperator() const;
		void TestPlusOperator() const;
		void TestEqualOperator() const;
		void TestNotEqualOperator() const;
		void TestLeftShiftOperator() const;

	};
}