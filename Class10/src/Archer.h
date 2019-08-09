#pragma once
#include "Character.h"

namespace cpp_class10_test {
	class TestArcher;
}

namespace cpp_class10 {

	class Archer : public Character
	{
		friend cpp_class10_test::TestArcher;

	public:
		Archer(const int health, const int damage, std::string name) :
			Character(health, damage, name) {};

		virtual int getDamage() const override;
		virtual std::string getType() const override;
	};
}