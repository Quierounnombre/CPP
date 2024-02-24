#include "Bureaucrat/Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat M("MARCOS", 43);

	cout << M;
	try
	{
		Bureaucrat A("ALFONSO", -19);
	}
	catch (const std::exception &e)
	{
		cerr << "Caught exception: " << e.what() << endl;
	}
	try
	{
		Bureaucrat B("BOBERTO", 1384);
	}
	catch (const std::exception &e)
	{
		cerr << "Caught exception: " << e.what() << endl;
	}
	try
	{
		Bureaucrat C("CLAUDIO", 1);
		cout << C;
	}
	catch (const std::exception &e)
	{
		cerr << "Caught exception: " << e.what() << endl;
	}
}
