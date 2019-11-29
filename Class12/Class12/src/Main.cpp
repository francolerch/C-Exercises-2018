#include <iostream>
#include "TestVector.h"
#include "TestList.h"

using namespace cpp_class12_test;

int main() {
	TestVector tv;
	TestList tl;

	tv.runTests();
	tl.runTests();

	std::cin.get();

	return 0;
}