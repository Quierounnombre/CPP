#include "Intern.hpp"

#pragma region CONSTRUCTOR

void	Intern::constructor_log(string s)
{
	if (_do_log)
	{
		cout << INTERN_CONSTRUCTOR_LOG_COLOR;
		cout << s;
		cout << INTERN_RESET_COLOR << endl;
	}
}

Intern::Intern(void) :
_do_log(INTERN_DEFAULT_DO_LOG)
{
	constructor_log(INTERN_DEFAULT_CONSTRUCTOR_LOG);
}

Intern::Intern(bool log) :
_do_log(log)
{
	constructor_log(INTERN_DEFAULT_CONSTRUCTOR_LOG);
}

Intern::~Intern()
{
	constructor_log(INTERN_DESTRUCTOR_LOG);
}

Intern::Intern(const Intern &Intern) :
_do_log(Intern._do_log)
{
	constructor_log(INTERN_COPY_CONSTRUCTOR_LOG);
}

Intern & Intern::operator= (const Intern &Intern)
{
	constructor_log(INTERN_COPY_ASSIGNMENT_LOG);
	if (this != & Intern)
	{
	}
	this->_do_log = Intern._do_log;
	return (*this);
}

#pragma endregion
