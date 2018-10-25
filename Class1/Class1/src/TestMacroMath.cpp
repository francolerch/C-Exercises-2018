#include <iostream>
#include "MacroMath.h"
#include "TestMacroMath.h"
#include <assert.h>

namespace cpp_class1_macrotest {

	void TestAbsoluteValueMacro() {
		assert(AbsoluteValue(-10) == 10);
		std::cout << "TestAbsoluteValueMacro Test Passed" << std::endl;
	};

	void TestPow2Macro() {
		assert(Pow2(10) == 100);
		std::cout << "TestPow2Macro Test Passed" << std::endl;
	};

	void TestSqrtMacro() {
		assert(Sqrt(144) == 12);
		std::cout << "TestSqrtMacro Test Passed" << std::endl;
	};

	void TestFactMacro() {
		assert(Fact(5) == 120);
		std::cout << "TestFactMacro Test Passed" << std::endl;
	};
}