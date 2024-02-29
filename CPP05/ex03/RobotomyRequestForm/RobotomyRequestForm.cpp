#include "RobotomyRequestForm.hpp"

#pragma region CONSTRUCTOR

void	RobotomyRequestForm::constructor_log(string s)
{
	if (_do_log)
	{
		cout << ROBOTOMYREQUESTFORM_CONSTRUCTOR_LOG_COLOR;
		cout << s;
		cout << ROBOTOMYREQUESTFORM_RESET_COLOR << endl;
	}
}

RobotomyRequestForm::RobotomyRequestForm(string name) :
AForm(name, ROBOTOMYREQUESTFORM_SIGN_REQS, ROBOTOMYREQUESTFORM_EXEC_REQS),
_do_log(ROBOTOMYREQUESTFORM_DEFAULT_DO_LOG)
{
	constructor_log(ROBOTOMYREQUESTFORM_DEFAULT_CONSTRUCTOR_LOG);
}

RobotomyRequestForm::RobotomyRequestForm(string name, bool log) :
AForm(name, ROBOTOMYREQUESTFORM_SIGN_REQS, ROBOTOMYREQUESTFORM_EXEC_REQS, log),
_do_log(log)
{
	constructor_log(ROBOTOMYREQUESTFORM_DEFAULT_CONSTRUCTOR_LOG);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	constructor_log(ROBOTOMYREQUESTFORM_DESTRUCTOR_LOG);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &RobotomyRequestForm) :
AForm(RobotomyRequestForm.getName(), RobotomyRequestForm.getGradeToSign(), RobotomyRequestForm.getGradeToExecute(), RobotomyRequestForm._do_log),
_do_log(RobotomyRequestForm._do_log)
{
	constructor_log(ROBOTOMYREQUESTFORM_COPY_CONSTRUCTOR_LOG);
}

RobotomyRequestForm & RobotomyRequestForm::operator= (const RobotomyRequestForm &RobotomyRequestForm)
{
	constructor_log(ROBOTOMYREQUESTFORM_COPY_ASSIGNMENT_LOG);
	if (this != & RobotomyRequestForm)
	{
	}
	this->_do_log = RobotomyRequestForm._do_log;
	return (*this);
}

#pragma endregion
