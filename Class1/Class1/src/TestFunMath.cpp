#include "TestFunMath.h"
#include "FunMath.h"
#include <assert.h>
#include <iostream>

using namespace cpp_class1;

namespace cpp_class1_funtest {

	void TestGetPiMath() {
		assert(GetPi() == 3.1415927410125732f);
		std::cout << "GetPi Test Passed" << std::endl;
	};

	void TestGetHalfPiMath() {
		assert(GetHalfPi() == GetPi() / 2.0);
		std::cout << "GetHalfPi Test Passed" << std::endl;
	};

	void TestGetQuarterPiMath() {
		assert(GetQuarterPi() == GetHalfPi() / 2.0);
		std::cout << "GetQuarterPi Test Passed" << std::endl;
	};

	void TestGetDoublePiMath() {
		assert(GetDoublePi() == GetPi() * 2.0);
		std::cout << "GetDoublePi Test Passed" << std::endl;
	};

	void TestAbsoluteValueMath() {
		assert(GetAbsoluteValue(5) == 5);
		assert(GetAbsoluteValue(-2) == 2);
		std::cout << "TestAbsoluteValueMath Test Passed" << std::endl;
	};

	void TestPow2MacroMath() {
		assert(GetPow2(10) == 100);
		assert(GetPow2(2) == 4);
		assert(GetPow2(6) == 36);
		std::cout << "TestPow2MacroMath Test Passed" << std::endl;
	};

	void TestSqrtMacroMath() {
		assert(GetSqrt(144) == 12.0f);
		assert(GetSqrt(25) == 5);
		std::cout << "TestSqrtMacroMath Test Passed" << std::endl;
	};

	void TestFactMacroMath() {
		assert(GetFact(5) == 120);
		assert(GetFact(2) == 2);
		assert(GetFact(3) == 6);
		std::cout << "TestFactMacroMath Test Passed" << std::endl;
	};

	void TestMinMath() {
		assert(Min(5, 10) == 5);
		assert(Min(12, 4) == 4);
		assert(Min(-2, 4) == -2);
		std::cout << "TestMinMath Test Passed" << std::endl;
	};

	void TestMaxMath() {
		assert(Max(5, 10) == 10);
		assert(Max(12, 4) == 12);
		assert(Max(-2, 4) == 4);
		std::cout << "TestMaxMath Test Passed" << std::endl;
	};

	void TestModMath() {
		assert(Mod(-5, 3) == 8);
		assert(Mod(10, 15) == 5);
		std::cout << "TestModMath Test Passed" << std::endl;
	};

	void TestIsOddMath() {
		assert(IsOdd(5));
		assert(IsOdd(2) == false);
		std::cout << "TestIsOddMath Test Passed" << std::endl;
	};

	void TestIsEvenMath() {
		assert(IsEven(5) == false);
		assert(IsEven(2));
		std::cout << "TestIsEvenMath Test Passed" << std::endl;
	};

	void TestIsBetweenMath() {
		assert(IsBetween(5, 10, 9));
		assert(IsBetween(5, 10, 15) == false);
		std::cout << "TestIsBetweenMath Test Passed" << std::endl;
	};

	void TestClampMath() {
		assert(Clamp(5, 10, 12) == 10);
		assert(Clamp(5, 10, 0) == 5);
		assert(Clamp(5, 10, 6) == 6);
		assert(Clamp(-5, 10, -10) == -5);
		std::cout << "TestClampMath Test Passed" << std::endl;
	};

	void TestNearestNumberMath() {
		assert(NearestNumber(5, 10, 12) == 10);
		assert(NearestNumber(5, 10, 6) == 5);
		assert(NearestNumber(5, 10, 7) == 5);
		assert(NearestNumber(-5, 10, 0) == -5);
		std::cout << "TestNearestNumberMath Test Passed" << std::endl;
	};
}