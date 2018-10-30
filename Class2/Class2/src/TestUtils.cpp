#include "TestUtils.h"
#include "Utils.h"

namespace cpp_class2_test {
	void testAreEqualDouble()
	{
		assert(cpp_class2::areEqual(1.5, 3.0) == false);
		assert(cpp_class2::areEqual(1.5, 1.5));
		assert(cpp_class2::areEqual(1.0000000000001, 1.0000000000001));
		print("testAreEqualDouble Test Passed");
	};

	void testAreEqualFloat()
	{
		assert(cpp_class2::areEqual(1.5f, 3.0f) == false);
		assert(cpp_class2::areEqual(1.5f, 1.5f));
		assert(cpp_class2::areEqual(1.0000000000001f, 1.0000000000001f));
		assert(cpp_class2::areEqual(1.000000000000000000000001f, 1.00000000000000000000001f));
		print("testAreEqualFloat Test Passed");
	};
}