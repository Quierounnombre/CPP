#include "../Bureaucrat.hpp"

void	Bureaucrat::decrementGrade(n_int grade_change)
{
	string	error_msg;

	if (check_grade_change(grade_change))
		this->_grade += grade_change;
	else
		throw GradeTooLowException(this->_grade + grade_change);
}
