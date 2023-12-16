#include "Harl.hpp"

Harl::Harl() :
_do_log(false)
{
	if (_do_log)
	{
		std::cout << CONSTRUCTOR_LOG_COLOR;
		std::cout << "Default constructor called";
		std::cout << RESET_COLOR << std::endl;
	}
}

Harl::~Harl()
{
	if (_do_log)
	{
		std::cout << CONSTRUCTOR_LOG_COLOR;
		std::cout << "Destructor called";
		std::cout << RESET_COLOR << std::endl;
	}
}

Harl::Harl(const Harl &Harl) :
_do_log(Harl._do_log)
{
	if (_do_log)
	{
		std::cout << CONSTRUCTOR_LOG_COLOR;
		std::cout << "Copy constructor called";
		std::cout << RESET_COLOR << std::endl;
	}
}

Harl & Harl::operator= (const Harl &Harl)
{
	if (_do_log)
	{
		std::cout << CONSTRUCTOR_LOG_COLOR;
		std::cout << "Copy assignment called";
		std::cout << RESET_COLOR << std::endl;
	}
	if (this != & Harl)
	{
	}
	return (*this);
}

void	Harl::debug(void)
{
	std::cout << "Today is raining" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "Today is raining a 78% more than the same day in the last 38 years" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "We should take a umbrella, today may rain" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "WHY! is raining, aren't you the weather man? you can decide if it rains or not, so \
		WHY\?!\?\?!\?! IS ?!?!! RAINING?!?!?!!!" << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*fun_ptr[4])(void);

	fun_ptr[0] = &Harl::debug;
	fun_ptr[1] = &Harl::error;
	fun_ptr[2] = &Harl::info;
	fun_ptr[3] = &Harl::warning;

	std::string	fun_name[4];

	fun_name[0] = "DEBUG";
	fun_name[1] = "ERROR";
	fun_name[2] = "INFO";
	fun_name[3] = "WARNING";

	for (int i = 0; i < 4; i++)
	{
		if (fun_name[i] == level)
			(this->*fun_ptr[i])();
	}
}