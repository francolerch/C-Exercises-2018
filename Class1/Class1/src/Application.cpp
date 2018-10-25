#include <iostream>
#include "TestMacroMath.h"
#include "TestFunMath.h"


namespace cpp_class1 {
	void tests() {
		std::cout << "Class 1 - Exercises" << std::endl;

		std::cout << std::endl;

		cpp_class1_macrotest::TestAbsoluteValueMacro();
		cpp_class1_macrotest::TestPow2Macro();
		cpp_class1_macrotest::TestSqrtMacro();
		cpp_class1_macrotest::TestFactMacro();

		std::cout << std::endl;

		cpp_class1_funtest::TestGetPiMath();
		cpp_class1_funtest::TestGetHalfPiMath();
		cpp_class1_funtest::TestGetQuarterPiMath();
		cpp_class1_funtest::TestGetDoublePiMath();

		std::cout << std::endl;

		cpp_class1_funtest::TestAbsoluteValueMath();
		cpp_class1_funtest::TestPow2MacroMath();
		cpp_class1_funtest::TestSqrtMacroMath();
		cpp_class1_funtest::TestFactMacroMath();

		std::cout << std::endl;

		cpp_class1_funtest::TestMinMath();
		cpp_class1_funtest::TestMaxMath();
		cpp_class1_funtest::TestModMath();
		cpp_class1_funtest::TestIsOddMath();
		cpp_class1_funtest::TestIsEvenMath();
		cpp_class1_funtest::TestIsBetweenMath();
		cpp_class1_funtest::TestClampMath();
		cpp_class1_funtest::TestNearestNumberMath();

		std::cin.get();
	}
}

int main() {
	cpp_class1::tests();
	return 0;
};