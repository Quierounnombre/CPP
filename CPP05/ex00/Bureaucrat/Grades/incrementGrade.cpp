#include "../Bureaucrat.hpp"

void	Bureaucrat::incrementGrade(n_int grade_change)
{
	if (check_grade_change(grade_change))
		this->_grade -= grade_change;
	else
		throw GradeTooHighException("Grade can't be greater than " + MAX_BUREAUCRAT_GRADE);
}
