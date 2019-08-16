#pragma once

#include "Teacher.h"

namespace cpp_class11_test {
	class TestTeacher
	{
	public:
		void runTest();

	private:
		void testConstructor() const;
		void testCopyConstructor() const;
		void testLeftShiftOperator() const;
	};
}