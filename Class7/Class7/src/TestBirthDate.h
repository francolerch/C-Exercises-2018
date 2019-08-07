#pragma once
#include <assert.h>
#include "BirthDate.h"
#include <iostream>

namespace cpp_class7_test {

	class TestBirthDate
	{
	public:
		TestBirthDate() {};

		void TestConstructor();
		void TestCopyConstructor();
		void TestGetDay();
		void TestGetMonth();
		void TestGetYear();
		void TestToString();
		void TestGetZodiacSign();
		void TestGetAge();
	};
}