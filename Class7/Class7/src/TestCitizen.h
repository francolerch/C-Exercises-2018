#pragma once
#include "Citizen.h"
#include <assert.h>
#include <iostream>

namespace cpp_class7_test {

	class TestCitizen {
	public:
		TestCitizen() = default;

		void TestConstructor();
		void TestCopyConstructor();
		void TestGetBirthDate();
		void TestGetName();
		void TestGetGender();
		void TestIsAdult();
		void TestIsTeenager();
		void TestIsChild();
		void TestIsRetired();
	};
}