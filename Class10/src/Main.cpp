#include "TestBarbarian.h"
#include "TestArcher.h"
#include "TestDruid.h"

#include "Barbarian.h"
#include "Archer.h"
#include "Druid.h"
#include "Battle.h"
#include <iostream>

using namespace cpp_class10;

int main() {
	cpp_class10_test::TestBarbarian testBarbarian;
	cpp_class10_test::TestArcher testArcher;
	cpp_class10_test::TestDruid testDruid;

	testBarbarian.runTests();
	testArcher.runTests();
	testDruid.runTests();

	Barbarian barbarian(100, 10, "Pedro");
	Archer archer(100, 10, "Martin");
	Druid druid(100, 10, "Juan");

	Character* fighters[3];
	fighters[0] = &barbarian;
	fighters[1] = &archer;
	fighters[2] = &druid;

	char fighter1;
	char fighter2;

	std::cout << std::endl;
	std::cout << "Choose the first fighter! (1) Pedro the Barbarian  (2) Martin the Archer  (3) Juan the Druid" << std::endl;
	std::cin >> fighter1;
	std::cout << "Choose the second fighter! (1) Barbarian  (2) Archer  (3) Druid" << std::endl;
	std::cin >> fighter2;

	Character* winner = battle(*fighters[fighter1 - '0' - 1], *fighters[fighter2 - '0' - 1]);

	std::cout << "The winner is: " << winner->getName() << " the " << winner->getType() << "!" << std::endl;
	std::cin.get();

	return 0;
}