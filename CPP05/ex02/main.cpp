#include "Bureaucrat/Bureaucrat.hpp"
#include "AForm/AForm.hpp"
#include "ShrubberyCreationForm/ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm/RobotomyRequestForm.hpp"

# define CAUGHT_EXCEPTION "Caught exception: "

int	main(void)
{
	ShrubberyCreationForm	F("Renew the garden");
	RobotomyRequestForm		R("CLAUBOTICE");
	Bureaucrat				M("MARCOS", 146);

	std::srand(std::time(NULL));
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
	try
	{
		Bureaucrat	B("BOBERTO", 140);
		F.execute(B);
	}
	catch (const std::exception &e)
	{
		cerr << CAUGHT_EXCEPTION << e.what() << endl;
	}
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
	try
	{
		M.incrementGrade(40);
		F.execute(M);
		cout << "Garden renewed" << endl;
	}
	catch (const std::exception &e)
	{
		cerr << CAUGHT_EXCEPTION << e.what() << endl;
	}
	try
	{
		R.beSigned(M);
	}
	catch (const std::exception &e)
	{
		cerr << CAUGHT_EXCEPTION << e.what() << endl;
	}
	try
	{
		cout << R;
		M.incrementGrade(40);
		R.beSigned(M);
		cout << R;
	}
	catch (const std::exception &e)
	{
		cerr << CAUGHT_EXCEPTION << e.what() << endl;
	}
	try
	{
		cout << M;
		R.beSigned(M);
	}
	catch (const std::exception &e)
	{
		cerr << CAUGHT_EXCEPTION << e.what() << endl;
	}
	try
	{
		M.incrementGrade(40);
		cout << M;
		R.execute(M);
		R.execute(M);
		R.execute(M);
		R.execute(M);
		R.execute(M);
	}
	catch (const std::exception &e)
	{
		cerr << CAUGHT_EXCEPTION << e.what() << endl;
	}
}
