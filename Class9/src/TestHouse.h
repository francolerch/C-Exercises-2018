#pragma once

namespace cpp_class9_test {

	class TestHouse
	{
	public:
		void RunTests();

	private:
		void TestConstructor();
		void TestCopyConstructor();
		void TestAssignOperator();
		void TestLeftShiftOperator();
		void TestGetDoorArea();
		void TestGetTotalWindowArea();
	};
}
