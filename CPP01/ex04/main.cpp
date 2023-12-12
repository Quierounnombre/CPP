#include "Sed/Sed.hpp"
#include "Tester/Tester.hpp"

int		main(int argc, char **argv)
{
	int			pos_of_dot;
	Tester		tester;
	Sed			*sed;

	tester.run_test();
	sed = new Sed(false, "HOLA", "ADIOS", TEST_GET_LINE);
	
}
