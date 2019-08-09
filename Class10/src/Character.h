#pragma once
#include <string>

namespace cpp_class10_test {
	class TestBarbarian;
}

namespace cpp_class10 {
	class Character
	{

	protected:
		int m_Health, m_Attack;
		std::string m_Name;

	protected:
		Character(const int health, const int attack, std::string& name)
			: m_Health(health), m_Attack(attack), m_Name(name) {};

	public:
		Character(const Character& character)
			: m_Health(character.m_Health), 
			m_Attack(character.m_Attack),
			m_Name(character.m_Name) {};

		virtual ~Character() {};

		inline int getHealth() const { return m_Health; };
		inline int getAttack() const { return m_Attack; };
		inline std::string getName() const { return m_Name; };
		inline void setHealth(const int health) { m_Health = health; };
		inline void setAttack(const int attack) { m_Attack = attack; };

		Character& operator=(Character& character);

		bool isDead() const;
		virtual int getDamage() const = 0;
		virtual std::string getType() const = 0;
	};
}