#include "GradeTooHighException.hpp"

#pragma region CONSTRUCTOR

void	GradeTooHighException::constructor_log(string s)
{
	if (_do_log)
	{
		cout << GRADETOOHIGHEXCEPTION_CONSTRUCTOR_LOG_COLOR;
		cout << s;
		cout << GRADETOOHIGHEXCEPTION_RESET_COLOR << endl;
	}
}

GradeTooHighException::GradeTooHighException(string error_msg) :
_error_msg(error_msg),
_do_log(GRADETOOHIGHEXCEPTION_DEFAULT_DO_LOG)
{
	constructor_log(GRADETOOHIGHEXCEPTION_DEFAULT_CONSTRUCTOR_LOG);
}

GradeTooHighException::GradeTooHighException(string error_msg, bool log) :
_error_msg(error_msg),
_do_log(log)
{
	constructor_log(GRADETOOHIGHEXCEPTION_DEFAULT_CONSTRUCTOR_LOG);
}

GradeTooHighException::~GradeTooHighException()
{
	constructor_log(GRADETOOHIGHEXCEPTION_DESTRUCTOR_LOG);
}

GradeTooHighException::GradeTooHighException(const GradeTooHighException &GradeTooHighException) :
_error_msg(GradeTooHighException._error_msg),
_do_log(GradeTooHighException._do_log)
{
	constructor_log(GRADETOOHIGHEXCEPTION_COPY_CONSTRUCTOR_LOG);
}

GradeTooHighException & GradeTooHighException::operator= (const GradeTooHighException &GradeTooHighException)
{
	constructor_log(GRADETOOHIGHEXCEPTION_COPY_ASSIGNMENT_LOG);
	if (this != & GradeTooHighException)
	{
	}
	this->_do_log = GradeTooHighException._do_log;
	return (*this);
}

#pragma endregion

const string	GradeTooHighException::what() const
{
	return (_error_msg);
}