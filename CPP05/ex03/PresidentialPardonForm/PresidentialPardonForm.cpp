#include "PresidentialPardonForm.hpp"

#pragma region CONSTRUCTOR

void	PresidentialPardonForm::constructor_log(string s)
{
	if (_do_log)
	{
		cout << PRESIDENTIALPARDONFORM_CONSTRUCTOR_LOG_COLOR;
		cout << s;
		cout << PRESIDENTIALPARDONFORM_RESET_COLOR << endl;
	}
}

PresidentialPardonForm::PresidentialPardonForm(string target) :
AForm(target, PRESIDENTIALPARDONFORM_SIGN_REQS, PRESIDENTIALPARDONFORM_EXEC_REQS),
_do_log(PRESIDENTIALPARDONFORM_DEFAULT_DO_LOG)
{
	constructor_log(PRESIDENTIALPARDONFORM_DEFAULT_CONSTRUCTOR_LOG);
}

PresidentialPardonForm::PresidentialPardonForm(string target, bool log) :
AForm(target, PRESIDENTIALPARDONFORM_SIGN_REQS, PRESIDENTIALPARDONFORM_EXEC_REQS, log),
_do_log(log)
{
	constructor_log(PRESIDENTIALPARDONFORM_DEFAULT_CONSTRUCTOR_LOG);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	constructor_log(PRESIDENTIALPARDONFORM_DESTRUCTOR_LOG);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &PresidentialPardonForm) :
AForm(PresidentialPardonForm.getName(), PresidentialPardonForm.getGradeToSign(), PresidentialPardonForm.getGradeToExecute(), PresidentialPardonForm._do_log),
_do_log(PresidentialPardonForm._do_log)
{
	constructor_log(PRESIDENTIALPARDONFORM_COPY_CONSTRUCTOR_LOG);
}

PresidentialPardonForm & PresidentialPardonForm::operator= (const PresidentialPardonForm &PresidentialPardonForm)
{
	constructor_log(PRESIDENTIALPARDONFORM_COPY_ASSIGNMENT_LOG);
	if (this != & PresidentialPardonForm)
	{
	}
	this->_do_log = PresidentialPardonForm._do_log;
	return (*this);
}

#pragma endregion
