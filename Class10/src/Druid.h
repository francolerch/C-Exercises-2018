#pragma once
#include "Character.h"

namespace cpp_class10_test {
	class TestDruid;
}

namespace cpp_class10 {

	class Druid : public Character
	{
		friend cpp_class10_test::TestDruid;

	public:
		Druid(const int health, const int damage, std::string name) :
			Character(health, damage, name) {};

		virtual int getDamage() const override;
		virtual std::string getType() const override;
	};
}