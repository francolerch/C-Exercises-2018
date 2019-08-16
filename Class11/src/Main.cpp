#include "TestPerson.h"
#include "TestEmployee.h"
#include "TestTeacher.h"
#include "TestDoctor.h"

int main()
{
	cpp_class11_test::TestPerson testPerson;
	cpp_class11_test::TestEmployee testEmployee;
	cpp_class11_test::TestTeacher testTeacher;
	cpp_class11_test::TestDoctor testDoctor;

	testPerson.runTest();
	testEmployee.runTest();
	testTeacher.runTest();
	testDoctor.runTest();

	std::cin.get();

	return 0;
};