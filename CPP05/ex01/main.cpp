#include "Bureaucrat/Bureaucrat.hpp"
#include "Form/Form.hpp"

# define CAUGHT_EXCEPTION "Caught exception: "

int	main(void)
{
	Form		F("Execution", 1, 100);
	Bureaucrat	M("MARCOS", 43);

	cout << M;
	cout << F;
	try
	{
		M.signForm(F);
		F.beSigned(M);
	}
	catch(const std::exception &e)
	{
		cerr << CAUGHT_EXCEPTION << e.what() << endl;
	}
	try
	{
		Bureaucrat A("ALFONSO", -19);
	}
	catch (const std::exception &e)
	{
		cerr << CAUGHT_EXCEPTION << e.what() << endl;
	}
	try
	{
		Bureaucrat B("BOBERTO", 1384);
	}
	catch (const std::exception &e)
	{
		cerr << CAUGHT_EXCEPTION << e.what() << endl;
	}
	try
	{
		Bureaucrat C("CLAUDIO", 1);
		F.beSigned(C);
		cout << C;
		cout << F;
	}
	catch (const std::exception &e)
	{
		cerr << CAUGHT_EXCEPTION << e.what() << endl;
	}
}
