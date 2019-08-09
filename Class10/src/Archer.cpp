#include "Archer.h"
#include <math.h>

namespace cpp_class10 {

	int Archer::getDamage() const
	{
		return 2 * (rand() % (getAttack() / 2) + 1);
	}

	std::string Archer::getType() const
	{
		return "Archer";
	}
}