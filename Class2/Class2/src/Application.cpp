#include "Utils.h"
#include "TestUtils.h"
#include "TestArrayUtils.h"


int main() {
	cpp_class2::printSizes();

	cpp_class2_test::testAreEqualDouble();
	cpp_class2_test::testAreEqualFloat();
	cpp_class2_test::testTruncateArray();
	cpp_class2_test::testReverseArray();
	cpp_class2_test::testXorArrays();
	cpp_class2_test::testMultiplyArrays();
	cpp_class2_test::testMergeSortedArray();
	cpp_class2_test::testGetPrimeCount();
	cpp_class2_test::testGetPowerOfTwoCount();

	std::cin.get();
	return 0;
};