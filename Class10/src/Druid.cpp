#include "Druid.h"
#include <math.h>

int cpp_class10::Druid::getDamage() const
{
	return (rand() % (getAttack()*2) + 1) / 2;
}

std::string cpp_class10::Druid::getType() const
{
	return "Druid";
}
