#pragma once
#include "Character.h"

namespace cpp_class10_test {
	class TestBarbarian;
}

namespace cpp_class10 {
	class Barbarian : public Character
	{
		friend cpp_class10_test::TestBarbarian;

	public: 
		Barbarian(const int health, const int attack, std::string name)
			: Character(health, attack, name) {};

		virtual int getDamage() const override;
		virtual std::string getType() const override;
	};
}