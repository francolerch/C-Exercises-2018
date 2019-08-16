#pragma once

#include "Person.h"

namespace cpp_class11_test {
	class TestPerson
	{
	public:
		void runTest();

	private:
		void testConstructor() const;
		void testLeftShiftOperator() const;
	};
}