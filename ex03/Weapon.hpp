#include <iostream>
#pragma once

using std::string;
using std::cout;
using std::endl;
class Weapon {
private:
	string	m_type;
public:
	Weapon(string type);
	Weapon();
	const	string &getType();
	void 	setType(string type);
};
