#include "../AForm.hpp"

void	AForm::beSigned(Bureaucrat &B)
{
	if (this->getSigned())
		throw FormAlreadySigned(this->getName());
	if (B.getGrade() <= this->_grade_to_sign)
	{
		this->_signed = true;
	}
	else
	{
		throw GradeTooLowException(B.getGrade());
	}
}