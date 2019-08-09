#include "Character.h"

namespace cpp_class10 {
	Character& Character::operator=(Character& character)
	{
		if (this == &character)
			return *this;

		m_Health = character.m_Health;
		m_Attack = character.m_Attack;
		m_Name = character.m_Name;

		return *this;
	}

	bool Character::isDead() const
	{
		return (m_Health <= 0);
	}
}