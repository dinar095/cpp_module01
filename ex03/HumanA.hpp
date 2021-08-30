#include <iostream>
#include "Weapon.hpp"
#pragma once

using std::endl;
using std::cout;
//class Weapon;

class HumanA {
private:
	Weapon &m_weapon;
	string m_name;
public:
	HumanA(string name, Weapon &weapon);
	~HumanA();
	void attack();
};