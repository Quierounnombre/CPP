#ifndef TESTER_HPP
# define TESTER_HPP

# pragma once

# include <iostream>
# include <string>
# include "../Sed/Sed.hpp"

# define TEST_FILE_NAME "tmp_test_file"
# define TEST_GET_LINE "../Test_get_line.txt"
# define TEST_GET_LINE_REPLACE "../Test_get_line.txt.replace"
# define TEST_GET_LINE_REPLACE_REPLACE "../Test_get_line.txt.replace.replace"
# define TEST_FILE_NAME_EXTENSION "tmp_test_file.extension"
# define TEST_FILE_NAME_REPLACE "tmp_test_file.replace"
# define TEST_PASSED "\e[0;32mTest passed \e[0m"
# define TEST_FAILED "\e[0;31mTest failed \e[0m"
# define ERROR_DELETING_FILE "file can't be deleted"
# define TEST_REPLACE "ADIOS, DON MANOLO"

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
		void	test_get_line(void);
		void	test_replace_content(void);
		void	test_file_dump(void);
		void	run_test(void);
	
	private:

};

#endif