#pragma once
#include "City.h"
#include <assert.h>
#include <iostream>

namespace cpp_class7_test {
	class TestCity {
	public:
		TestCity() {};

		void TestConstructor() const;
		void TestCopyConstructor() const;
		void TestAddCitizen() const;
		void TestGetRetiredCount() const;
		void TestGetChildCount() const;
		void TestGetManCount() const;
		void TestGetWomanCount() const;
		void TestGetCitizenByName() const;
	};
}