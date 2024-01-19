#include "FragTrap.hpp"

#pragma region CONSTRUCTOR

void	FragTrap::constructor_log(string s)
{
	if (_do_log)
	{
		cout << FRAGTRAP_CONSTRUCTOR_LOG_COLOR;
		cout << s;
		cout << FRAGTRAP_RESET_COLOR << endl;
	}
}


FragTrap::FragTrap() :
_do_log(FRAGTRAP_DEFAULT_DO_LOG),
ClapTrap()
{
	_hp = FRAGTRAP_DEFAULT_HP;
	_atk_dmg = FRAGTRAP_DEFAULT_ATK_DMG;
	_energy = FRAGTRAP_DEFAULT_ENERGY;
	_name = FRAGTRAP_DEFAULT_NAME;
	constructor_log("FragTrap default constructor called");
}

FragTrap::FragTrap(string name) :
_do_log(FRAGTRAP_DEFAULT_DO_LOG),
ClapTrap(name, FRAGTRAP_DEFAULT_DO_LOG)
{
	_hp = FRAGTRAP_DEFAULT_HP;
	_atk_dmg = FRAGTRAP_DEFAULT_ATK_DMG;
	_energy = FRAGTRAP_DEFAULT_ENERGY;
	constructor_log("FragTrap default constructor called");
}

FragTrap::FragTrap(string name, bool log) :
_do_log(log),
ClapTrap(name, log)
{
	_hp = FRAGTRAP_DEFAULT_HP;
	_atk_dmg = FRAGTRAP_DEFAULT_ATK_DMG;
	_energy = FRAGTRAP_DEFAULT_ENERGY;
	constructor_log("FragTrap default constructor called");
}

FragTrap::~FragTrap()
{
	constructor_log("FragTrap destructor called");
}

FragTrap::FragTrap(const FragTrap &FragTrap) :
_do_log(FragTrap._do_log)
{
	_hp = FragTrap._hp;
	_atk_dmg = FragTrap._atk_dmg;
	_energy = FragTrap._energy;
	_name = FragTrap._name;
	constructor_log("FragTrap copy constructor called");
}

FragTrap & FragTrap::operator= (const FragTrap &FragTrap)
{
	constructor_log("FragTrap copy assignment called");
	if (this != & FragTrap)
	{
	}
	this->_do_log = FragTrap._do_log;
	this->_atk_dmg = FragTrap._atk_dmg;
	this->_energy = FragTrap._energy;
	this->_hp = FragTrap._hp;
	this->_name = FragTrap._name;
	return (*this);
}

#pragma endregion

#pragma region HIGH-FIVE

static void high_five_ok(void)
{
	cout << "Nice, here it comes" << endl;
	usleep(FRAGTRAP_HIGH_FIVE_DELAY);
	cout << "." << endl;
	usleep(FRAGTRAP_HIGH_FIVE_DELAY);
	cout << ". ." << endl;
	usleep(FRAGTRAP_HIGH_FIVE_DELAY);
	cout << ". . ." << endl;
	usleep(FRAGTRAP_HIGH_FIVE_DELAY);
	cout << "BAAAAAAAAAAAAAAAAAAAAAAAAMMMMMMMMM!!!!!!" << endl;
	usleep(FRAGTRAP_HIGH_FIVE_DELAY);
	cout << "cooool, see you around buddy! ^^" << endl;
}

static void high_five_ko(void)
{
	cout << "Oh" << endl;
	usleep(FRAGTRAP_HIGH_FIVE_DELAY);
	cout << "Okey" << endl;
	usleep(FRAGTRAP_HIGH_FIVE_DELAY);
	cout << "i have ." << endl;
	usleep(FRAGTRAP_HIGH_FIVE_DELAY);
	cout << "i have . ." << endl;
	usleep(FRAGTRAP_HIGH_FIVE_DELAY);
	cout << "i have . . ." << endl;
	usleep(FRAGTRAP_HIGH_FIVE_DELAY);
	cout << "i have to go, see you around" << endl;
	usleep(FRAGTRAP_HIGH_FIVE_DELAY);
	cout << "chao" << endl;
	cout << "𝙨𝙣𝙞𝙛𝙛 :(" << endl;
}

void	FragTrap::highFivesGuys(void)
{
	string	s;

	if (system_eval())
	{
		cout << "Hey!, do you want to high Five? [Y/N]" << endl;
		while (true)
		{
			getline(std::cin, s);
			if (cin.eof())
				exit(1);
			if (s == "Y")
			{
				high_five_ok();
				break ;
			}
			else if (s == "N")
			{
				high_five_ko();
				break ;
			}
			cout << "Are you sure you want it?[Y/N]" << endl;
		}
		_energy--;
	}
}

#pragma endregion
