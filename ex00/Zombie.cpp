#include "Zombie.hpp"

void Zombie::announce(void)
{
    cout << m_name << " BraiiiiiiinnnzzzZ..." << endl;
}

Zombie::Zombie(string name)
{
    m_name = name;
    cout << "Hello, I`m " << m_name << endl;
}

Zombie::~Zombie()
{
    cout << "Zombie "<< m_name << " has died" << endl;
}
