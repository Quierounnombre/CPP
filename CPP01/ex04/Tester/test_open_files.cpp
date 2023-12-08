#include "Tester.hpp"

static void	test_file(const char *file_name, int &counter)
{
	Sed				*sed;
	std::ofstream	file;

	sed = new Sed(true, "", "");
	if (sed)
	{
		if (!sed->open_files(file_name))
			std::cout << TEST_PASSED << counter << std::endl;
		else
			std::cout << TEST_FAILED << counter << std::endl;
		counter++;
		file.open(file_name);
		if (sed->open_files(file_name))
		{
			std::cout << TEST_PASSED << counter << std::endl;
			sed->close_files();
		}
		else
			std::cout << TEST_FAILED << counter << std::endl;
		counter++;
			file.close();
		if (remove(file_name))
			std::cout << ERROR_DELETING_FILE << std::endl;
		if (remove(TEST_FILE_NAME_REPLACE))
			std::cout << ERROR_DELETING_FILE << std::endl;
		delete (sed);
	}
}

void	Tester::test_open_files(void)
{
	int		test_counter;

	test_counter = 1;
	test_file(TEST_FILE_NAME, test_counter);
	test_file(TEST_FILE_NAME_EXTENSION, test_counter);
}
