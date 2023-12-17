#include "ScavTrap.hpp"

#pragma region CONSTRUCTOR

ScavTrap::ScavTrap() :
_is_gate_keeping(false)
{
	if (_do_log)
	{
		std::cout << CONSTRUCTOR_LOG_COLOR;
		std::cout << "ScavTrap default constructor called";
		std::cout << RESET_COLOR << std::endl;
	}
}

ScavTrap::~ScavTrap()
{
	if (_do_log)
	{
		std::cout << CONSTRUCTOR_LOG_COLOR;
		std::cout << "ScavTrap destructor called";
		std::cout << RESET_COLOR << std::endl;
	}
}

ScavTrap::ScavTrap(const ScavTrap &ScavTrap) :
_is_gate_keeping(ScavTrap._is_gate_keeping)
{
	if (_do_log)
	{
		std::cout << CONSTRUCTOR_LOG_COLOR;
		std::cout << "ScavTrap copy constructor called";
		std::cout << RESET_COLOR << std::endl;
	}
}

ScavTrap & ScavTrap::operator= (const ScavTrap &ScavTrap)
{
	if (_do_log)
	{
		std::cout << CONSTRUCTOR_LOG_COLOR;
		std::cout << "ScavTrap copy assignment called";
		std::cout << RESET_COLOR << std::endl;
	}
	if (this != & ScavTrap)
	{
	}
	_is_gate_keeping = ScavTrap._is_gate_keeping;
	return (*this);
}

#pragma endregion

#pragma region ATTACK

void	ScavTrap::attack(const std::string &target)
{
	if (system_eval())
	{
		if (_atk_dmg < 0)
			std::cout << "ScavTrap unit" + _name + " weapons have malfuntion" << std::endl;
		else
		{
			std::cout << "ScavTrap unit " + _name + " attacked " + target + ", causing ";
			std::cout << _atk_dmg << " points of damage" << std::endl;
		}
		_energy--;
	}
}

#pragma endregion

#pragma region DEFENSE

void	ScavTrap::takeDamage(unsigned int amount)
{
	int		damage;

	if (system_eval())
	{
		damage = amount;
		if (damage <= 0)
			std::cout << "ScavTrap unit " +_name + " shields are up and running" << std::endl;
		else
		{
			std::cout << "ScavTrap unit " + _name + " has suffer " << damage;
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

void	ScavTrap::beRepaired(unsigned int amount)
{
	int		healing;

	if (system_eval())
	{
		healing = amount;
		if (healing > 0)
		{
			std::cout << "ScavTrap unit " + _name + " has repair itself for " << healing;
			std::cout << " hit points" << std::endl;
			_hp += amount;
		}
		else
			std::cout << "ScavTrap unit " + _name + " has failed its repair routine " << std::endl;
		_energy--;
	}
}

#pragma endregion

#pragma region CONDITIONS

bool	ScavTrap::system_eval(void)
{
	if (_energy > 0 && _hp > 0)
		return (true);
	std::cout << "ScavTrap unit " +_name + "dosen't respond, ";
	std::cout << "is either destroyed or out of battery" << std::endl;
	return (false);
}

#pragma endregion

#pragma region STATES

void	ScavTrap::guardGate(void)
{
	_is_gate_keeping = !_is_gate_keeping;
	if (_is_gate_keeping)
		std::cout << "ScavTrap unit " + _name + " is in gate guard mode" << std::endl;
	else
		std::cout << "ScavTrap unit " + _name + " exit guard mode" << std::endl;
}

#pragma endregion