#include "ScavTrap.hpp"

#pragma region CONSTRUCTOR

void	ScavTrap::constructor_log(string s)
{
	if (_do_log)
	{
		cout << SCAVTRAP_CONSTRUCTOR_LOG_COLOR;
		cout << s;
		cout << SCAVTRAP_RESET_COLOR << endl;
	}
}

ScavTrap::ScavTrap() :
ClapTrap(SCAVTRAP_DEFAULT_NAME, SCAVTRAP_DEFAULT_DO_LOG),
_do_log(SCAVTRAP_DEFAULT_DO_LOG),
_is_gate_keeping(SCAVTRAP_DEFAULT_GATEKEEP)
{
	_hp = SCAVTRAP_DEFAULT_HP;
	_atk_dmg = SCAVTRAP_DEFAULT_ATK_DMG;
	_energy = SCAVTRAP_DEFAULT_ENERGY;
	_name = SCAVTRAP_DEFAULT_NAME;
	constructor_log("ScavTrap default constructor called");
}

ScavTrap::ScavTrap(string name) :
ClapTrap(name, SCAVTRAP_DEFAULT_DO_LOG),
_do_log(SCAVTRAP_DEFAULT_DO_LOG),
_is_gate_keeping(SCAVTRAP_DEFAULT_GATEKEEP)
{
	_hp = SCAVTRAP_DEFAULT_HP;
	_atk_dmg = SCAVTRAP_DEFAULT_ATK_DMG;
	_energy = SCAVTRAP_DEFAULT_ENERGY;
	_name = name;
	constructor_log("ScavTrap default constructor called");
}

ScavTrap::ScavTrap(string name, bool log) :
ClapTrap(name, log),
_do_log(log),
_is_gate_keeping(SCAVTRAP_DEFAULT_GATEKEEP)
{
	_hp = SCAVTRAP_DEFAULT_HP;
	_atk_dmg = SCAVTRAP_DEFAULT_ATK_DMG;
	_energy = SCAVTRAP_DEFAULT_ENERGY;
	constructor_log("ScavTrap default constructor called");
}

ScavTrap::~ScavTrap()
{
	constructor_log("ScavTrap destructor called");
}

ScavTrap::ScavTrap(const ScavTrap &ScavTrap) :
_do_log(ScavTrap._do_log),
_is_gate_keeping(ScavTrap._is_gate_keeping)
{
	constructor_log("ScavTrap copy constructor called");
}

ScavTrap & ScavTrap::operator= (const ScavTrap &ScavTrap)
{
	constructor_log("ScavTrap copy assignment called");
	if (this != & ScavTrap)
	{
	}
	this->_do_log = ScavTrap._do_log;
	this->_is_gate_keeping = ScavTrap._is_gate_keeping;
	return (*this);
}

#pragma endregion

#pragma region STATES

void	ScavTrap::guardGate(void)
{
	if (system_eval())
	{	
		_is_gate_keeping = !_is_gate_keeping;
		if (_is_gate_keeping)
			cout << "ScavTrap unit " + _name + " is in gate guard mode" << endl;
		else
			cout << "ScavTrap unit " + _name + " exit guard mode" << endl;
	}
}

#pragma endregion

#pragma region ATTACK

void	ScavTrap::attack(const string &target)
{
	if (system_eval())
	{
		cout << SCAVTRAP_ATTACK_COLOR;
		if (_atk_dmg < 0)
			cout << "ScavTrap unit" + _name + " weapons have malfuntion";
		else
		{
			cout << "ScavTrap unit " + _name + " attacked " + target + ", causing ";
			cout << _atk_dmg << " points of damage";
		}
		_energy--;
		cout << SCAVTRAP_RESET_COLOR << endl;
	}
}

#pragma endregion