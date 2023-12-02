#ifndef TESTER_HPP
# define TESTER_HPP

# pragma once

# include <iostream>
# include <string>
# include "../Sed/Sed.hpp"

# define TEST_FILE_NAME "tmp_test_file"
# define TEST_FILE_NAME_EXTENSION "tmp_test_file.extension"
# define TEST_FILE_NAME_REPLACE "tmp_test_file.replace"
# define TEST_PASSED "\e[0;32mTest Superado \e[0m"
# define ERROR_DELETING_FILE "file can't be deleted"

class Sed;

class Tester
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		Tester();
		Tester(const Tester &Tester);
		~Tester();
		Tester & operator = (const Tester &Tester);

		//TEST
		//-------------------------------------------------------

		void	test_open_files(void);
		void	run_test(void);
	
	private:

};

#endif