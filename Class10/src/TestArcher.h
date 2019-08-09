#pragma once

namespace cpp_class10_test {

	class TestArcher
	{
	public:
		void runTests() const;

	private:
		void TestConstructor() const;
		void TestCopyConstructor() const;
		void TestAssignOperator() const;
		void TestIsDead() const;
		void testGetDamage() const;
		void testGetType() const;
	};
}