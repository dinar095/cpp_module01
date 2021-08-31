#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::getline;
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
	string	line;
	std::ifstream inf(filename);
	if (!inf)
	{
		cout << "Error file" << endl;
		return 1;
	}
	std::ofstream outf(filename + ".replace", std::ofstream::trunc);
	if (!outf)
	{
		cout << "Error output file" << endl;
		return 1;
	}
	while (getline(inf, line))
	{
		size_t pos = 0;
		while ((pos = line.find(s1)) != string::npos)
		{
			line.erase(pos, s1.size());
			line.insert(pos, s2);
		}
		outf << line << endl;
	}
	inf.close();
	outf.close();
	return 0;
}
