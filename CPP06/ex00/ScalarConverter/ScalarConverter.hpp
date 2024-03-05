#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# pragma once

# include <iostream>
# include <string>

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define TEST_PARSE_FLAG true

static const char dupped_chars_lst[] =
{
	'-',
	'.',
	'f'
};

static const string	limits_exceptions_lst[] =
{
	"nan",
	"-inf",
	"-inff",
	"+inf",
	"+inff"
};

# define SCALARCONVERTER_ERROR_MULTIPLE_CHARS "String contain multiple chars: "
# define SCALARCONVERTER_ERROR_EMPTY_STRING "Empty string: "
# define SCALARCONVERTER_ERROR_DUPED_CHARS "String contain dupped chars: "
# define SCALARCONVERTER_ERROR_BAD_STRING "Bad string: "
# define SCALARCONVERTER_ERROR_ILLEGAL_CHARS "Illegal chars: "

# define u_int	u_int32_t
# define n_int	int32_t

class ScalarConverter
{
	public:
		//Convert
		//-------------------------------------------------------

		static void	convert(string s);

	private:
		//Error Managment
		//-------------------------------------------------------

		static void	error_mng(string s);

		//Parse
		//-------------------------------------------------------

		static void	check_string(string s);
		static bool	check_named_exceptions(string s);
		static bool check_dup_chars(string s);
		static bool	check_multiple_char(string s);
		static bool	check_bad_string(string s);
		static bool	check_illegal_chars(string s);
};

#endif