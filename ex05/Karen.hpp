#include <iostream>
#pragma once

class Karen{

private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );

public:
	Karen();
	void complain( std::string level );
	~Karen();
};
