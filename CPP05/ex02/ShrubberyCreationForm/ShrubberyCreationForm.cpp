#include "ShrubberyCreationForm.hpp"

#pragma region CONSTRUCTOR

void	ShrubberyCreationForm::constructor_log(string s)
{
	if (_do_log)
	{
		cout << SHRUBBERYCREATIONFORM_CONSTRUCTOR_LOG_COLOR;
		cout << s;
		cout << SHRUBBERYCREATIONFORM_RESET_COLOR << endl;
	}
}

ShrubberyCreationForm::ShrubberyCreationForm(string name) :
AForm(name, SHRUBBERYCREATIONFORM_SIGN_REQS, SHRUBBERYCREATIONFORM_EXEC_REQS),
_do_log(SHRUBERRYCRATIONFORM_DEFAULT_DO_LOG)
{
	constructor_log(SHRUBBERYCREATIONFORM_DEFAULT_CONSTRUCTOR_LOG);
}

ShrubberyCreationForm::ShrubberyCreationForm(string name, bool log) :
AForm(name, SHRUBBERYCREATIONFORM_SIGN_REQS, SHRUBBERYCREATIONFORM_EXEC_REQS),
_do_log(log)
{
	constructor_log(SHRUBBERYCREATIONFORM_DEFAULT_CONSTRUCTOR_LOG);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	constructor_log(SHRUBBERYCREATIONFORM_DESTRUCTOR_LOG);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ShrubberyCreationForm) :
AForm(ShrubberyCreationForm.getName(), ShrubberyCreationForm.getGradeToSign(), ShrubberyCreationForm.getGradeToExecute()),
_do_log(ShrubberyCreationForm._do_log)
{
	constructor_log(SHRUBBERYCREATIONFORM_COPY_CONSTRUCTOR_LOG);
}

ShrubberyCreationForm & ShrubberyCreationForm::operator= (const ShrubberyCreationForm &ShrubberyCreationForm)
{
	constructor_log(SHRUBBERYCREATIONFORM_COPY_ASSIGNMENT_LOG);
	if (this != & ShrubberyCreationForm)
	{
	}
	this->_do_log = ShrubberyCreationForm._do_log;
	return (*this);
}

#pragma endregion
