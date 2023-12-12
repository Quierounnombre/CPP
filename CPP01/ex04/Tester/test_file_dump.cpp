#include "Tester.hpp"

void	Tester::test_file_dump(void)
{
	Sed			*sed;
	std::string	s;

	sed = new Sed(false, "HOLA", "ADIOS", TEST_GET_LINE);
	delete sed;
	sed = new Sed(true, "", "", "");
	if (sed)
	{
		if (!sed->open_files(TEST_GET_LINE_REPLACE))
			exit(0);
		s = sed->get_file_content();
		if (s == TEST_REPLACE)
			std::cout << TEST_PASSED << 7 << std::endl;
		else
			std::cout << TEST_FAILED << 7 << std::endl;
		sed->close_files();
		if (remove(TEST_GET_LINE_REPLACE_REPLACE))
				std::cout << ERROR_DELETING_FILE << std::endl;
		if (remove(TEST_GET_LINE_REPLACE))
				std::cout << ERROR_DELETING_FILE << std::endl;
		delete sed;
	}
}
