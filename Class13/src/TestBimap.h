#pragma once

namespace cpp_class13_test {
	class TestBimap
	{
	public:
		void runTests() const;

	private:
		void TestInsert() const;
		void TestSearchKey() const;
		void TestSearchValue() const;
		void TestUpdateKey() const;
		void TestUpdateValue() const;
		void TestDeleteKey() const;
		void TestDeleteValue() const;
		void TestClear() const;
	};
}