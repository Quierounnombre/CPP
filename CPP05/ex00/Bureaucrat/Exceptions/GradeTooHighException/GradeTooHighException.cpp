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

GradeTooHighException::GradeTooHighException(n_int grade) :
_max_grade(grade),
_do_log(GRADETOOHIGHEXCEPTION_DEFAULT_DO_LOG)
{
	constructor_log(GRADETOOHIGHEXCEPTION_DEFAULT_CONSTRUCTOR_LOG);
}

GradeTooHighException::GradeTooHighException(n_int grade, bool log) :
_max_grade(grade),
_do_log(log)
{
	constructor_log(GRADETOOHIGHEXCEPTION_DEFAULT_CONSTRUCTOR_LOG);
}

GradeTooHighException::~GradeTooHighException()
{
	constructor_log(GRADETOOHIGHEXCEPTION_DESTRUCTOR_LOG);
}

GradeTooHighException::GradeTooHighException(const GradeTooHighException &GradeTooHighException) :
_max_grade(GradeTooHighException._max_grade),
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
	string	s;

	s = "Bureaucrat grade is to high ";
	s.append(std::to_string(_max_grade));
	return (s);
}