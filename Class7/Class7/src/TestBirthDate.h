#pragma once
#include <assert.h>
#include "BirthDate.h"
#include <iostream>

namespace cpp_class7_test {
	class TestBirthDate
	{
	public:
		TestBirthDate() {};

		void TestConstructor() const;
		void TestCopyConstructor() const;
		void TestGetDay() const;
		void TestGetMonth() const;
		void TestGetYear() const;
		void TestToString() const;
		void TestGetZodiacSign() const;
		void TestGetAge() const;
	};
}