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
_do_log(DIAMONDTRAP_DEFAULT_DO_LOG),
FragTrap(name),
ScavTrap(name)
{
	ClapTrap::_name = name + DIAMONDTRAP_CLAP_NAME_SUFFIX;
	_name = name;
	constructor_log("DiamondTrap default constructor called");
}

DiamondTrap::DiamondTrap(string name, bool log) :
_do_log(log),
FragTrap(name, log),
ScavTrap(name, log)
{
	ClapTrap::_name = name + DIAMONDTRAP_CLAP_NAME_SUFFIX;
	_name = name;
	_hp = FRAGTRAP_DEFAULT_HP;
	_energy = SCAVTRAP_DEFAULT_ENERGY;
	_atk_dmg = FRAGTRAP_DEFAULT_ATK_DMG;
	constructor_log("DiamondTrap default constructor called");
}

DiamondTrap::~DiamondTrap()
{
	constructor_log("DiamondTrap destructor called");
}

DiamondTrap::DiamondTrap(const DiamondTrap &DiamondTrap) :
_do_log(DiamondTrap._do_log)
{
	_hp = DiamondTrap._hp;
	_energy = DiamondTrap._energy;
	_atk_dmg = DiamondTrap._atk_dmg;
	_name = DiamondTrap._name;
	_do_log = DiamondTrap._do_log;
	constructor_log("DiamondTrap copy constructor called");
}

DiamondTrap & DiamondTrap::operator= (const DiamondTrap &DiamondTrap)
{
	constructor_log("DiamondTrap copy assignment called");
	if (this != & DiamondTrap)
	{
	}
	this->_do_log = DiamondTrap._do_log;
	this->_hp = DiamondTrap._hp;
	this->_atk_dmg = DiamondTrap._atk_dmg;
	this->_name = DiamondTrap._name;
	this->_energy = DiamondTrap._energy;
	return (*this);
}

#pragma endregion

#pragma region WHO_AM_I

void	DiamondTrap::whoAmI(void)
{
	if (system_eval())
	{
		cout << "I am " << _name << " and also " << ClapTrap::_name << endl;
		_energy--;
	}
}

#pragma endregion