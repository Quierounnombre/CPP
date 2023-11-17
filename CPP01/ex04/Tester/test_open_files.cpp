#include "Tester.hpp"

void	Tester::test_open_files(void)
{
	Sed				*sed;
	stdd:ofstream	file;

	sed = new(Sed);

	if (sed->open_files(TEST_FILE_NAME))
	{
		sed->close_files();
	}
	ifile.
	if 
	delete (sed);
}
