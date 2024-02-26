#include "../Form.hpp"

void	Form::beSigned(Bureaucrat &B)
{
	if (B.getGrade() <= this->_grade_to_sign)
	{
		this->_signed = true;
	}
	else
	{
		throw GradeTooLowException(B.getGrade());
	}
}