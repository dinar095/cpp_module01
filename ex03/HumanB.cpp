#include "HumanB.hpp"

void HumanB::attack()
{
	cout << m_name <<  " attacks with his" << m_weapon->getType() << endl;
}

HumanB::HumanB(string name)
{
	m_name = name;
}

HumanB::~HumanB()
{
	cout << m_name << "has died" << endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	m_weapon = &weapon;
}