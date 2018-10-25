#include <iostream>
#include "MacroMath.h"
#include "TestMacroMath.h"
#include <assert.h>

namespace cpp_class1_macrotest {

	void TestAbsoluteValueMacro() {
		assert(AbsoluteValue(-10) == 10);
		assert(AbsoluteValue(5) == 5);
		std::cout << "TestAbsoluteValueMacro Test Passed" << std::endl;
	};

	void TestPow2Macro() {
		assert(Pow2(10) == 100);
		assert(Pow2(-2) == 4);
		std::cout << "TestPow2Macro Test Passed" << std::endl;
	};

	void TestSqrtMacro() {
		assert(Sqrt(144) == 12);
		assert(Sqrt(25) == 5);
		std::cout << "TestSqrtMacro Test Passed" << std::endl;
	};

	void TestFactMacro() {
		assert(Fact(5) == 120);
		assert(Fact(3) == 6);
		std::cout << "TestFactMacro Test Passed" << std::endl;
	};
}