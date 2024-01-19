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
	constructor_log("FragTrap default constructor called");
}

FragTrap::FragTrap(string name) :
_do_log(FRAGTRAP_DEFAULT_DO_LOG),
ClapTrap(name, FRAGTRAP_DEFAULT_DO_LOG)
{
	constructor_log("FragTrap default constructor called");
}

FragTrap::FragTrap(string name, bool log) :
_do_log(log),
ClapTrap(name, log)
{
	constructor_log("FragTrap default constructor called");
}

FragTrap::~FragTrap()
{
	constructor_log("FragTrap destructor called");
}

FragTrap::FragTrap(const FragTrap &FragTrap) :
_do_log(FragTrap._do_log)
{
	constructor_log("FragTrap copy constructor called");
}

FragTrap & FragTrap::operator= (const FragTrap &FragTrap)
{
	constructor_log("FragTrap copy assignment called");
	if (this != & FragTrap)
	{
	}
	this->_do_log = FragTrap._do_log;
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
