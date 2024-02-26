#include "../Bureaucrat.hpp"

void	Bureaucrat::executeForm(AForm const &form)
{
	try
	{
		form.execute(*this);
		cout << getName() << " executed " << form.getName() << endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << endl;
	}
}