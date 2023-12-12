#include "Tester.hpp"

void	Tester::test_replace_content(void)
{
	std::string	s;
	Sed			*sed;

	sed = new Sed(true, "HOLA", "ADIOS", "");
	if (sed)
	{
		if (sed->open_files(TEST_GET_LINE))
		{
			s = sed->get_file_content();
			sed->replace_file_content(s);
			if (s == TEST_REPLACE)
				std::cout << TEST_PASSED << 6 << std::endl;
			else
				std::cout << TEST_FAILED << 6 << std::endl;
			sed->close_files();
			if (remove(TEST_GET_LINE_REPLACE))
				std::cout << ERROR_DELETING_FILE << std::endl;
		}
		delete sed;
	}
}
