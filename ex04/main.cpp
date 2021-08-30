#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::string;

int main(int ac, char **av)
{
	if (!(av[1] && av[2] && av[3]))
	{
		cout << "Need 3 arguments" << endl;
		return 1;
	}
	string	s1 = av[2];
	string	s2 = av[3];
	string	filename = av[1];
//	filename = filename + ".replace";
	std::ifstream inf(filename);
	if (!inf)
		cout << "Error file" << endl;
	std::ofstream outf(filename + "replace");
	inf.close();
	return 0;
}
