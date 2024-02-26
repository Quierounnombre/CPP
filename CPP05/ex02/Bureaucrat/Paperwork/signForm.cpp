#include "../Bureaucrat.hpp"

void	Bureaucrat::signForm(AForm &F)
{
	try
	{
		F.beSigned(*this);
		cout << this->getName() << " signed " << F.getName() << endl;
	}
	catch(const std::exception& e)
	{
		cout << this->getName() << " couldn't sign " << F.getName() << " because " << e.what() << endl;
	}
}
