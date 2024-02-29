#include "../PresidentialPardonForm.hpp"

void	PresidentialPardonForm::execute(Bureaucrat const &B) const
{
	can_be_Executed(B);
	cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" << endl;
}