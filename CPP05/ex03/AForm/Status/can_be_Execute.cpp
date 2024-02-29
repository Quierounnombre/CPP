#include "../AForm.hpp"

void	AForm::can_be_Executed(Bureaucrat const &B) const
{
	if (!(this->getSigned()))
		throw FormNotSign(this->getName());
	if (B.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException(B.getGrade());
}