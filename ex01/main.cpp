#include "Zombie.hpp"

int main()
{
	Zombie *army;

	army = zombieHorde(5, "Yoma");
	for (int i = 0; i < 5; i++)
		army[i].announce();
	delete []army;
	return 0;
}
