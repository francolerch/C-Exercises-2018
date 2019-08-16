#pragma once

#include "Employee.h"

namespace cpp_class11_test {
	class TestEmployee
	{
	public:
		void runTest();

	private:
		void testConstructor() const;
		void testCopyConstructor() const;
		void testEqualOperator() const;
		void testLeftShiftOperator() const;
	};
}