#include "Bureaucrat/Bureaucrat.hpp"
#include "AForm/AForm.hpp"
#include "ShrubberyCreationForm/ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm/RobotomyRequestForm.hpp"
#include "PresidentialPardonForm/PresidentialPardonForm.hpp"
#include "Intern/Intern.hpp"

# define CAUGHT_EXCEPTION "Caught exception: "

int	main(void)
{
	ShrubberyCreationForm	F("/Users/vicgarci/Desktop/CPP/CPP05/ex02/AForm/");
	RobotomyRequestForm		R("CLAUBOTICE");
	Bureaucrat				M("MARCOS", 146);
	PresidentialPardonForm	P("MARCOS");
	Intern					I;

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
	M.incrementGrade(40);
	M.executeForm(F);
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
		M.executeForm(R);
		M.executeForm(R);
		M.executeForm(R);
		M.executeForm(R);
		M.executeForm(R);
	}
	catch (const std::exception &e)
	{
		cerr << CAUGHT_EXCEPTION << e.what() << endl;
	}
	try
	{
		Bureaucrat C("CLAUDIO", 1);
		P.beSigned(C);
		C.executeForm(P);
	}
	catch (const std::exception &e)
	{
		cerr << CAUGHT_EXCEPTION << e.what() << endl;
	}
	try
	{
		AForm	*form = I.makeForm(INTERN_PARDON, "MATEO");

		M.incrementGrade(4);
		form->beSigned(M);
		M.incrementGrade(21);
		form->execute(M);
		delete(form);
	}
	catch (const std::exception &e)
	{
		cerr << CAUGHT_EXCEPTION << e.what() << endl;
	}
}
