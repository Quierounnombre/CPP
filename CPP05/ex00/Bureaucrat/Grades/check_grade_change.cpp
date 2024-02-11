#include "../Bureaucrat.hpp"

bool	Bureaucrat::check_grade_change(n_int delta)
{
	n_int	final_grade;

	final_grade = this->getGrade() + delta;
	if (final_grade <= MIN_BUREAUCRAT_GRADE
		&& final_grade >= MAX_BUREAUCRAT_GRADE)
		return (true);
	return (false);
}
