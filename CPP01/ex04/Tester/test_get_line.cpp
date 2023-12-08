#include "Tester.hpp"

void	Tester::test_get_line(void)
{
	std::string	s;
	Sed			*sed;

	s = "";
	sed = new Sed(true);
	if (sed->open_files(TEST_GET_LINE))
	{
		s = sed->get_file_content();
		if (s != "")
			std::cout << TEST_PASSED << 5 << std::endl;
		else
			std::cout << TEST_FAILED << 5 << std::endl;
		sed->close_files();
	}
	if (remove(TEST_GET_LINE_REPLACE))
		std::cout << ERROR_DELETING_FILE << std::endl;
	delete(sed);
}