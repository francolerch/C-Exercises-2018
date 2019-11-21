#pragma once
#include <string>

namespace cpp_class10_test {
	class TestBarbarian;
}

namespace cpp_class10 {
	class Character
	{
	protected:
		unsigned int m_Health, m_Attack;
		std::string m_Name;

	protected:
		Character(const int health, const int attack, const std::string& name)
			: m_Health(health), m_Attack(attack), m_Name(name) {};

	public:
		Character(const Character& character)
			: m_Health(character.m_Health),
			m_Attack(character.m_Attack),
			m_Name(character.m_Name) {};

		virtual ~Character() {};

		unsigned int getHealth() const { return m_Health; };
		unsigned int getAttack() const { return m_Attack; };
		const std::string getName() const { return m_Name; };
		void setHealth(const unsigned int health) { m_Health = health; };
		void setAttack(const unsigned int attack) { m_Attack = attack; };

		const Character& operator=(Character& character);

		bool isDead() const;
		virtual int getDamage() const = 0;
		virtual std::string getType() const = 0;
	};
}