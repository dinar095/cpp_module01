#include <iostream>
#include "Weapon.hpp"
#pragma once

using std::endl;
using std::cout;
using std::string;

class HumanB {
private:
	Weapon *m_weapon;
	string m_name;
public:
	HumanB(string name);
	~HumanB();
	void attack();
	void setWeapon(Weapon &weapon);
	void getWeapon();
};
