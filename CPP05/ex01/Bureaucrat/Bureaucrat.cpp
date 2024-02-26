#include "Bureaucrat.hpp"

#pragma region CONSTRUCTOR

void	Bureaucrat::constructor_log(string s)
{
	if (_do_log)
	{
		cout << BUREAUCRAT_CONSTRUCTOR_LOG_COLOR;
		cout << s;
		cout << BUREAUCRAT_RESET_COLOR << endl;
	}
}

Bureaucrat::Bureaucrat(string name, n_int grade) :
_name(name),
_do_log(BUREAUCRAT_DEFAULT_DO_LOG)
{
	_grade = 0;
	setGrade(grade);
	constructor_log(BUREAUCRAT_DEFAULT_CONSTRUCTOR_LOG);
}

Bureaucrat::Bureaucrat(string name, n_int grade, bool log) :
_name(name),
_do_log(log)
{
	_grade = 0;
	setGrade(grade);
	constructor_log(BUREAUCRAT_DEFAULT_CONSTRUCTOR_LOG);
}

Bureaucrat::~Bureaucrat()
{
	constructor_log(BUREAUCRAT_DESTRUCTOR_LOG);
}

Bureaucrat::Bureaucrat(const Bureaucrat &Bureaucrat) :
_name(Bureaucrat._name),
_do_log(Bureaucrat._do_log)
{
	constructor_log(BUREAUCRAT_COPY_CONSTRUCTOR_LOG);
}

Bureaucrat & Bureaucrat::operator= (const Bureaucrat &Bureaucrat)
{
	constructor_log(BUREAUCRAT_COPY_ASSIGNMENT_LOG);
	if (this != & Bureaucrat)
	{
	}
	this->_do_log = Bureaucrat._do_log;
	return (*this);
}

#pragma endregion

#pragma region SETTERS

void	Bureaucrat::setGrade(n_int new_grade)
{
	if (check_grade_change(new_grade))
		this->_grade = new_grade;
	else if (new_grade <= MIN_BUREAUCRAT_GRADE)
		throw GradeTooLowException(new_grade);
	else
		throw GradeTooHighException(new_grade);
}

#pragma endregion

#pragma region GETTERS

string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

n_int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

#pragma endregion

#pragma region OPERATOS

std::ostream &operator<<(std::ostream &out, const Bureaucrat &f)
{
	out << f.getName() << ", bureaucrat grade " << f.getGrade() << endl;
	return (out);
}

#pragma endregion