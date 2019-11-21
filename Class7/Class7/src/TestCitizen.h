#pragma once
#include "Citizen.h"
#include <assert.h>
#include <iostream>

namespace cpp_class7_test {
	class TestCitizen {
	public:
		TestCitizen() = default;

		void TestConstructor() const;
		void TestCopyConstructor() const;
		void TestGetBirthDate() const;
		void TestGetName() const;
		void TestGetGender() const;
		void TestIsAdult() const;
		void TestIsTeenager() const;
		void TestIsChild() const;
		void TestIsRetired() const;
	};
}