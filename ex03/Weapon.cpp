#include "Weapon.hpp"

Weapon::Weapon(string type) : m_type(type)
{}

const string &Weapon::getType()
{
	return m_type;
}

void Weapon::setType(string type)
{
	m_type = type;
}

Weapon::Weapon()
{}
