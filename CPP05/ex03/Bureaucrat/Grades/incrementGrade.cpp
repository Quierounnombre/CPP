#include "../Bureaucrat.hpp"

void	Bureaucrat::incrementGrade(n_int grade_change)
{
	if (check_grade_change(-grade_change))
		this->_grade -= grade_change;
	else
		throw GradeTooHighException(this->_grade - grade_change);
}
