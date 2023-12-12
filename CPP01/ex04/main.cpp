#include "Sed/Sed.hpp"
#include "Tester/Tester.hpp"

#ifndef RUN_TEST
# define RUN_TEST 0
#endif

int		main(int argc, char **argv)
{
	int			pos_of_dot;
	Tester		tester;
	Sed			*sed;

	if (argc != 4)
	{
		std::cout << "MY_SED only works whit 3 arguments example:" << std::endl;
		std::cout << "./MY_SED {file} {Target string} {replace string}" << std::endl;
	}
	else
	{
		argv++;
		if (RUN_TEST)
			tester.run_test();
		else
		{
			sed = new Sed(false, *(argv + 1), *(argv + 2), *(argv));
			delete(sed);
		}
	}
}
