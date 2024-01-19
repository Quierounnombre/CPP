#include "DiamondTrap.hpp"

#pragma region CONSTRUCTOR

void	DiamondTrap::constructor_log(string s)
{
	if (_do_log)
	{
		cout << DIAMONDTRAP_CONSTRUCTOR_LOG_COLOR;
		cout << s;
		cout << DIAMONDTRAP_RESET_COLOR << endl;
	}
}

DiamondTrap::DiamondTrap(string name) :
_do_log(DIAMONDTRAP_DEFAULT_DO_LOG)
{
	_hp = 
	constructor_log("DiamondTrap default constructor called");
}

DiamondTrap::DiamondTrap(bool log) :
_do_log(log)
{
	constructor_log("DiamondTrap default constructor called");
}

DiamondTrap::~DiamondTrap()
{
	constructor_log("DiamondTrap destructor called");
}

DiamondTrap::DiamondTrap(const DiamondTrap &DiamondTrap) :
_do_log(DiamondTrap._do_log)
{
	constructor_log("DiamondTrap copy constructor called");
}

DiamondTrap & DiamondTrap::operator= (const DiamondTrap &DiamondTrap)
{
	constructor_log("DiamondTrap copy assignment called");
	if (this != & DiamondTrap)
	{
	}
	this->_do_log = DiamondTrap._do_log;
	return (*this);
}

#pragma endregion
