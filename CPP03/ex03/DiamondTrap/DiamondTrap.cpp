#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) :
FragTrap(name),
ScavTrap(name),
ClapTrap(name),
_name(name)
{
	if (_do_log)
	{
		std::cout << CONSTRUCTOR_LOG_COLOR;
		std::cout << "DiamondTrap default constructor called";
		std::cout << RESET_COLOR << std::endl;
	}
	ClapTrap::_name = name + NAME_SUFFIX;
	_hp = FRAGTRAP_DEFAULT_HP;
	_energy = SCAVTRAP_DEFAULT_ENERGY;
	_atk_dmg = FRAGTRAP_DEFAULT_ATK_DMG;
}

DiamondTrap::~DiamondTrap()
{
	if (_do_log)
	{
		std::cout << CONSTRUCTOR_LOG_COLOR;
		std::cout << "DiamondTrap destructor called";
		std::cout << RESET_COLOR << std::endl;
	}
}

DiamondTrap::DiamondTrap(const DiamondTrap &DiamondTrap) :
ClapTrap(DiamondTrap),
ScavTrap(DiamondTrap),
FragTrap(DiamondTrap)
{
	*this = DiamondTrap;
	if (_do_log)
	{
		std::cout << CONSTRUCTOR_LOG_COLOR;
		std::cout << "DiamondTrap copy constructor called";
		std::cout << RESET_COLOR << std::endl;
	}
}

DiamondTrap & DiamondTrap::operator= (const DiamondTrap &DiamondTrap)
{
	if (_do_log)
	{
		std::cout << CONSTRUCTOR_LOG_COLOR;
		std::cout << "DiamondTrap copy assignment called";
		std::cout << RESET_COLOR << std::endl;
	}
 	if (this != & DiamondTrap)
	{
	}
	this->_name = DiamondTrap._name;
	this->_energy = DiamondTrap._energy;
	this->_hp = DiamondTrap._hp;
	this->_atk_dmg = DiamondTrap._atk_dmg;
	return (*this);
}