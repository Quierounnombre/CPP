#include "FragTrap.hpp"

#pragma region CONSTRUCTOR

FragTrap::FragTrap(std::string name) :
ClapTrap(name, FRAGTRAP_DEFAULT_HP, FRAGTRAP_DEFAULT_ATK_DMG, FRAGTRAP_DEFAULT_ENERGY, FRAGTRAP_DEFAULT_DO_LOG)
{
	if (_do_log)
	{
		std::cout << CONSTRUCTOR_LOG_COLOR;
		std::cout << "FragTrap default constructor called";
		std::cout << RESET_COLOR << std::endl;
	}
}

FragTrap::~FragTrap()
{
	if (_do_log)
	{
		std::cout << CONSTRUCTOR_LOG_COLOR;
		std::cout << "FragTrap destructor called";
		std::cout << RESET_COLOR << std::endl;
	}
}

FragTrap::FragTrap(const FragTrap &FragTrap) :
ClapTrap(FragTrap._name, FragTrap._hp, FragTrap._atk_dmg, FragTrap._energy, FragTrap._do_log)
{
	if (_do_log)
	{
		std::cout << CONSTRUCTOR_LOG_COLOR;
		std::cout << "FragTrap copy constructor called";
		std::cout << RESET_COLOR << std::endl;
	}
}

FragTrap & FragTrap::operator= (const FragTrap &FragTrap)
{
	if (_do_log)
	{
		std::cout << CONSTRUCTOR_LOG_COLOR;
		std::cout << "FragTrap copy assignment called";
		std::cout << RESET_COLOR << std::endl;
	}
	if (this != & FragTrap)
	{
	}
	_energy = FragTrap._energy;
	_atk_dmg = FragTrap._atk_dmg;
	_hp = FragTrap._hp;
	_do_log = FragTrap._do_log;
	_name = FragTrap._name;
	return (*this);
}

#pragma endregion

#pragma region ATTACK

void	FragTrap::attack(const std::string &target)
{
	if (system_eval())
	{
		if (_atk_dmg < 0)
			std::cout << "FragTrap unit" + _name + " weapons have malfuntion" << std::endl;
		else
		{
			std::cout << "FragTrap unit " + _name + " attacked " + target + ", causing ";
			std::cout << _atk_dmg << " points of damage" << std::endl;
		}
		_energy--;
	}
}

#pragma endregion

#pragma region DEFENSE

void	FragTrap::takeDamage(unsigned int amount)
{
	int		damage;

	if (system_eval())
	{
		damage = amount;
		if (damage <= 0)
			std::cout << "FragTrap unit " +_name + " shields are up and running" << std::endl;
		else
		{
			std::cout << "FragTrap unit " + _name + " has suffer " << damage;
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

void	FragTrap::beRepaired(unsigned int amount)
{
	int		healing;

	if (system_eval())
	{
		healing = amount;
		if (healing > 0)
		{
			std::cout << "FragTrap unit " + _name + " has repair itself for " << healing;
			std::cout << " hit points" << std::endl;
			_hp += amount;
		}
		else
			std::cout << "FragTrap unit " + _name + " has failed its repair routine " << std::endl;
		_energy--;
	}
}

#pragma endregion

#pragma region CONDITIONS

bool	FragTrap::system_eval(void)
{
	if (_energy > 0 && _hp > 0)
		return (true);
	std::cout << "FragTrap unit " +_name + "dosen't respond, ";
	std::cout << "is either destroyed or out of battery" << std::endl;
	return (false);
}

#pragma endregion

#pragma region GREETINGS

void	FragTrap::highFivesGuys(void)
{
	if (system_eval)
	{
		std::cout << "Let's high Five dude!!" << std::endl;
		std::cout << "that was so cool" << std::endl;
		_energy--;
	}
}

#pragma endregion