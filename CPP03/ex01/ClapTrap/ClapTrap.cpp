#include "ClapTrap.hpp"

#pragma region CONSTRUCTOR

void	ClapTrap::constructor_log(string s)
{
	if (_do_log)
	{
		cout << CLAPTRAP_CONSTRUCTOR_LOG_COLOR;
		cout << s;
		cout << CLAPTRAP_RESET_COLOR << endl;
	}
}

ClapTrap::ClapTrap(string name) :
_do_log(CLAPTRAP_DEFAULT_DO_LOG),
_name(name),
_energy(CLAPTRAP_DEFAULT_ENERGY),
_atk_dmg(CLAPTRAP_DEFAULT_ATK_DMG),
_hp(CLAPTRAP_DEFAULT_HP)
{
	constructor_log("ClapTrap default constructor called");
}

ClapTrap::ClapTrap(void) :
_do_log(CLAPTRAP_DEFAULT_DO_LOG),
_name(CLAPTRAP_DEFAULT_NAME),
_energy(CLAPTRAP_DEFAULT_ENERGY),
_atk_dmg(CLAPTRAP_DEFAULT_ATK_DMG),
_hp(CLAPTRAP_DEFAULT_HP)
{
	constructor_log("ClapTrap default constructor called");
}

ClapTrap::ClapTrap(string name, bool log) :
_do_log(log),
_name(name),
_energy(CLAPTRAP_DEFAULT_ENERGY),
_atk_dmg(CLAPTRAP_DEFAULT_ATK_DMG),
_hp(CLAPTRAP_DEFAULT_HP)
{
	constructor_log("ClapTrap default constructor called");
}

ClapTrap::~ClapTrap()
{
	constructor_log("ClapTrap destructor called");
}

ClapTrap::ClapTrap(const ClapTrap &ClapTrap) :
_do_log(ClapTrap._do_log),
_name(ClapTrap._name),
_energy(ClapTrap._energy),
_atk_dmg(ClapTrap._atk_dmg),
_hp(ClapTrap._hp)
{
	constructor_log("ClapTrap copy constructor called");
}

ClapTrap & ClapTrap::operator= (const ClapTrap &ClapTrap)
{
	constructor_log("ClapTrap copy assignment called");
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

void	ClapTrap::attack(const string &target)
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

void	ClapTrap::takeDamage(u_int amount)
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
			if ((u_int)_hp > amount)
				_hp -= amount;
			else
				_hp = -1;
		}
	}
}

#pragma endregion

#pragma region REPAIRS

void	ClapTrap::beRepaired(u_int amount)
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