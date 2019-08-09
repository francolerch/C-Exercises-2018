#include "Character.h"
#include <math.h>
#include <iostream>

namespace cpp_class10 {
	Character* battle(Character& char1, Character& char2) 
	{
		Character* winner = nullptr;
		bool char1Turn = true;
		Character* turn = &char1;
		Character* enemy = &char2;

		std::cout << std::endl;
		std::cout << "Battle begin!" << std::endl;
		std::cout << "****************************************" << std::endl;
		std::cin.get();


		while (!char1.isDead() && !char2.isDead())
		{
			std::cout << std::endl;
			std::cout << turn->getName() << " the " << turn->getType() << "'s turn: (" << turn->getHealth() << " HP)." <<  std::endl;

			int damage = turn->getDamage();
			enemy->setHealth(enemy->getHealth() - damage);

			std::cout << "Dealt: " << damage << " damage." << std::endl;
			std::cout << enemy->getName() << " the " << enemy->getType() << " now has " << enemy->getHealth() << " HP." << std::endl;
			std::cout << "------------------------------------" << std::endl;


			if (char1Turn) 
			{
				char1Turn = false;
				turn = &char2;
				enemy = &char1;
			} 
			else
			{
				char1Turn = true;
				turn = &char1;
				enemy = &char2;
			}

			std::cin.get();

		}

		if (char1.isDead())
			winner = &char2;
		else
			winner = &char1;

		std::cout << std::endl;

		return winner;
	}
}