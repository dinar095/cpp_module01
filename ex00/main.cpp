#include <iostream>
#include "Zombie.hpp"

int main() {
    Zombie zombie("Jack");
    Zombie *zombie1;

    zombie1 = newZombie("Martin");
    randomChump("Yasha");
    zombie1->announce();
    delete zombie1;

    return 0;
}
