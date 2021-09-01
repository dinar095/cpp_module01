#include "Karen.hpp"


int main(int ac, char **av)
{
	Karen gg;
	if (ac != 2)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return 0;
	}
	gg.complain(av[1]);
	return 0;
}
