#include <iostream>

using	std::string;
using	std::cout;
using std::endl;
int main( void )
{
	string str = "HI THIS IS BRAIN";
	string *strPTR = &str;
	string &strREF = str;


	cout << &str << endl;
	cout << strPTR << endl;
	cout << &strREF << endl;
	cout << *strPTR << endl;
	cout << strREF << endl;
}
