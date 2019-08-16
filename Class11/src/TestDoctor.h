#pragma once

#include "Doctor.h"

namespace cpp_class11_test {
	class TestDoctor
	{
	public:
		void runTest();

	private:
		void testConstructor() const;
		void testCopyConstructor() const;
		void testLeftShiftOperator() const;
	};
}