#include "Barbarian.h"
#include <math.h>

int cpp_class10::Barbarian::getDamage() const
{
	return (rand() % getAttack()) + 1;
}

std::string cpp_class10::Barbarian::getType() const
{
	return "Barbarian";
}