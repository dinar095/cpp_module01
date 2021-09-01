#include "HumanB.hpp"
#include "Weapon.hpp"

void HumanB::attack()
{
	if (!(m_weapon))
		cout << m_name << " Give peace" << endl;
	else
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

void HumanB::getWeapon()
{
	cout << "wewe" << m_weapon->getType() << endl;
}
