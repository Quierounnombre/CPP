#include "../ShrubberyCreationForm.hpp"

void	ShrubberyCreationForm::beSigned(Bureaucrat &B)
{
	if (B.getGrade() <= this->getGradeToSign())
	{
		this->setSigned(true);
	}
	else
	{
		throw GradeTooLowException(B.getGrade());
	}
}