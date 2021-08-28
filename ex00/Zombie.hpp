#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Zombie {
private:
    string m_name;

public:
    void announce( void );
    Zombie(string name);
    ~Zombie();
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );