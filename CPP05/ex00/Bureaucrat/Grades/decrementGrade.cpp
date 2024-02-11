#include "../Bureaucrat.hpp"

void	Bureaucrat::decrementGrade(n_int grade_change)
{
	if (check_grade_change(grade_change))
		this->_grade += grade_change;
	else
		throw GradeTooLowException("Grade can't be lower than " + MIN_BUREAUCRAT_GRADE);
}
