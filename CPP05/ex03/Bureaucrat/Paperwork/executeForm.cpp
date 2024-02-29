#include "../Bureaucrat.hpp"

void	Bureaucrat::executeForm(AForm const &form)
{
	try
	{
		cout << "hey" << endl;
		form.execute(*this);
		cout << "hey" << endl;
		cout << getName() << " executed " << form.getName() << endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << endl;
	}
}