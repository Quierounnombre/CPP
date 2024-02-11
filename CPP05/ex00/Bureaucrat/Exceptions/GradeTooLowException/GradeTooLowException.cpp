#include "GradeTooLowException.hpp"

#pragma region CONSTRUCTOR

void	GradeTooLowException::constructor_log(string s)
{
	if (_do_log)
	{
		cout << GRADETOOLOWEXCEPTION_CONSTRUCTOR_LOG_COLOR;
		cout << s;
		cout << GRADETOOLOWEXCEPTION_RESET_COLOR << endl;
	}
}

GradeTooLowException::GradeTooLowException(n_int grade) :
_min_grade(grade),
_do_log(GRADETOOLOWEXCEPTION_DEFAULT_DO_LOG)
{
	constructor_log(GRADETOOLOWEXCEPTION_DEFAULT_CONSTRUCTOR_LOG);
}

GradeTooLowException::GradeTooLowException(n_int grade, bool log) :
_min_grade(grade),
_do_log(log)
{
	constructor_log(GRADETOOLOWEXCEPTION_DEFAULT_CONSTRUCTOR_LOG);
}

GradeTooLowException::~GradeTooLowException()
{
	constructor_log(GRADETOOLOWEXCEPTION_DESTRUCTOR_LOG);
}

GradeTooLowException::GradeTooLowException(const GradeTooLowException &GradeTooLowException) :
_min_grade(GradeTooLowException._min_grade),
_do_log(GradeTooLowException._do_log)
{
	constructor_log(GRADETOOLOWEXCEPTION_COPY_CONSTRUCTOR_LOG);
}

GradeTooLowException & GradeTooLowException::operator= (const GradeTooLowException &GradeTooLowException)
{
	constructor_log(GRADETOOLOWEXCEPTION_COPY_ASSIGNMENT_LOG);
	if (this != & GradeTooLowException)
	{
	}
	this->_do_log = GradeTooLowException._do_log;
	return (*this);
}

#pragma endregion

const string	GradeTooLowException::what() const
{
	string	s;

	s = "Bureaucrat grade is to low ";
	s.append(std::to_string(_min_grade));
	return (s);
}