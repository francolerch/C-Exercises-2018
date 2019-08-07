#pragma once
#include "City.h"
#include <assert.h>
#include <iostream>

namespace cpp_class7_test {

	class TestCity {
	public:
		TestCity() {};

		void TestConstructor();
		void TestCopyConstructor();
		void TestAddCitizen();
		void TestGetRetiredCount();
		void TestGetChildCount();
		void TestGetManCount();
		void TestGetWomanCount();
		void TestGetCitizenByName();
	};
}