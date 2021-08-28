#include <iostream>
#pragma once


using std::string;
using std::cout;
using std::endl;

class Zombie {
private:
	string	m_name;
public:
	Zombie();
	void	announce( void );
	Zombie(string name);
    ~Zombie();
    void	setName(string name);
};

Zombie*		newZombie( string name );
void		randomChump( string name );
Zombie*		zombieHorde( int N, std::string name );
