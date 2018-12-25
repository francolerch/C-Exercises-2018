#include <iostream>
#include "TestLinkedList.h"

int main() 
{
	cpp_class5_test::testCreateList();
	cpp_class5_test::testPush_back();
	cpp_class5_test::testPop_back();
	cpp_class5_test::testClear();
	cpp_class5_test::testGetElementCount();
	cpp_class5_test::testClone();
	cpp_class5_test::testGetElementAtIndex();
	cpp_class5_test::testInsert();
	cpp_class5_test::testErase();
	cpp_class5_test::testGetOccurenceCount();
	cpp_class5_test::testEraseAllOcurrencies();
	cpp_class5_test::testReverse();

	std::cin.get();
	return 0;
}