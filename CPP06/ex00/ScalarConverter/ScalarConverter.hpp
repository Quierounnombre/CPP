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

# define SCALARCONVERTER_NAN "nan"
# define SCALARCONVERTER_MINUS_INF "-inf"
# define SCALARCONVERTER_MINUS_INFF "-inff"
# define SCALARCONVERTER_PLUS_INF "+inf"
# define SCALARCONVERTER_PLUS_INFF "+inff"

static const char dupped_chars_lst[]
{
	'-',
	'.',
	'f'
};

static const string	limits_exceptions_lst[]
{
	"nan",
	"-inf",
	"-inff",
	"+inf",
	"+inff"
};

# define SCALARCONVERTER_ERROR_MULTIPLE_CHARS "String contain multiple chars"
# define SCALARCONVERTER_ERROR_EMPTY_STRING "Empty string"
# define SCALARCONVERTER_ERROR_DUPED_CHARS "String contain dupped chars"
# define SCALARCONVERTER_ERROR_BAD_STRING "Bad string"

# define u_int	u_int32_t
# define n_int	int32_t

class ScalarConverter
{
	public:
		//Convert
		//-------------------------------------------------------

		static void	convert(string s);

	protected:
		bool	_do_log;

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
};

#endif