#include "ClapTrap.hpp"

#pragma region CONSTRUCTOR

ClapTrap::ClapTrap(std::string name) :
_do_log(CLAPTRAP_DEFAULT_DO_LOG),
_energy(CLAPTRAP_DEFAULT_ENERGY),
_hp(CLAPTRAP_DEFAULT_HP),
_atk_dmg(CLAPTRAP_DEFAULT_ATK_DMG),
_name(name)
{
	if (_do_log)
	{
		std::cout << CONSTRUCTOR_LOG_COLOR;
		std::cout << "ClapTrap default constructor called";
		std::cout << RESET_COLOR << std::endl;
	}
}

ClapTrap::ClapTrap(std::string name, unsigned int hp, unsigned int atk_dmg, unsigned int energy, bool log) :
_do_log(log),
_energy(energy),
_hp(hp),
_atk_dmg(atk_dmg),
_name(name)
{
	if (_do_log)
	{
		std::cout << CONSTRUCTOR_LOG_COLOR;
		std::cout << "ClapTrap default constructor called";
		std::cout << RESET_COLOR << std::endl;
	}
}

ClapTrap::~ClapTrap()
{
	if (_do_log)
	{
		std::cout << CONSTRUCTOR_LOG_COLOR;
		std::cout << "ClapTrap destructor called";
		std::cout << RESET_COLOR << std::endl;
	}
}

ClapTrap::ClapTrap(const ClapTrap &ClapTrap) :
_do_log(ClapTrap._do_log),
_energy(ClapTrap._energy),
_hp(ClapTrap._hp),
_atk_dmg(ClapTrap._atk_dmg),
_name(ClapTrap._name)
{
	if (_do_log)
	{
		std::cout << CONSTRUCTOR_LOG_COLOR;
		std::cout << "ClapTrap copy constructor called";
		std::cout << RESET_COLOR << std::endl;
	}
}

ClapTrap & ClapTrap::operator= (const ClapTrap &ClapTrap)
{
	if (_do_log)
	{
		std::cout << CONSTRUCTOR_LOG_COLOR;
		std::cout << "ClapTrap copy assignment called";
		std::cout << RESET_COLOR << std::endl;
	}
	if (this != & ClapTrap)
	{
	}
	this->_do_log = ClapTrap._do_log;
	this->_atk_dmg = ClapTrap._atk_dmg;
	this->_energy = ClapTrap._energy;
	this->_name = ClapTrap._name;
	this->_hp = ClapTrap._hp;
	return (*this);
}

#pragma endregion

#pragma region ATTACK

void	ClapTrap::attack(const std::string &target)
{
	if (system_eval())
	{
		if (_atk_dmg < 0)
			std::cout << "ClapTrap unit" + _name + " weapons have malfuntion" << std::endl;
		else
		{
			std::cout << "ClapTrap unit " + _name + " attacked " + target + ", causing ";
			std::cout << _atk_dmg << " points of damage" << std::endl;
		}
		_energy--;
	}
}

#pragma endregion

#pragma region DEFENSE

void	ClapTrap::takeDamage(unsigned int amount)
{
	int		damage;

	if (system_eval())
	{
		damage = amount;
		if (damage <= 0)
			std::cout << "Claptrap unit " +_name + " shields are up and running" << std::endl;
		else
		{
			std::cout << "ClapTrap unit " + _name + " has suffer " << damage;
			std::cout << " points of damage" << std::endl;
			if (_hp > amount)
				_hp -= amount;
			else
				_hp = -1;
		}
	}
}

#pragma endregion

#pragma region REPAIRS

void	ClapTrap::beRepaired(unsigned int amount)
{
	int		healing;

	if (system_eval())
	{
		healing = amount;
		if (healing > 0)
		{
			std::cout << "Claptrap unit " + _name + " has repair itself for " << healing;
			std::cout << " hit points" << std::endl;
			_hp += amount;
		}
		else
			std::cout << "ClapTrap unit " + _name + " has failed its repair routine " << std::endl;
		_energy--;
	}
}

#pragma endregion

#pragma region CONDITIONS

bool	ClapTrap::system_eval(void)
{
	if (_energy > 0 && _hp > 0)
		return (true);
	std::cout << "Claptrap unit " +_name + " dosen't respond, ";
	std::cout << "is either destroyed or out of battery" << std::endl;
	return (false);
}

#pragma endregion