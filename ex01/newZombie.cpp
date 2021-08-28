#include "Zombie.hpp"

Zombie*			newZombie( string name )
{
	return new Zombie(name);
}

Zombie*		zombieHorde( int N, std::string name )
{
	Zombie *army;
	army = new Zombie[N];
	for (int i = 0; i < N; i++)
		army[i].setName(name);
	return (army);
}
