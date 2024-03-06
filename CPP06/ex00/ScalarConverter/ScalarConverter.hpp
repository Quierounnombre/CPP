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

# ifndef TEST_PARSE_FLAG
#  define TEST_PARSE_FLAG false
# endif

# define SC_NAN "nan"
# define SC_NANF "nanf"
# define SC_MINUS_INF "-inf"
# define SC_MINUS_INFF "-inff"
# define SC_PLUS_INFF "+inff"
# define SC_PLUS_INF "+inf"

# define n_int	int32_t
# define u_int	u_int32_t

static const char dupped_chars_lst[] =
{
	'-',
	'.',
	'f'
};

static const string	limits_exceptions_lst[] =
{
	SC_NAN,
	SC_NANF,
	SC_MINUS_INF,
	SC_MINUS_INFF,
	SC_PLUS_INF,
	SC_PLUS_INFF
};

typedef enum	e_data_type
{
	type_int = 1,
	type_char = 2,
	type_float = 3,
	type_double = 4
}				t_data_type;

# define SCALARCONVERTER_ERROR_MULTIPLE_CHARS "String contain multiple chars: "
# define SCALARCONVERTER_ERROR_EMPTY_STRING "Empty string: "
# define SCALARCONVERTER_ERROR_DUPED_CHARS "String contain dupped chars: "
# define SCALARCONVERTER_ERROR_BAD_STRING "Bad string: "
# define SCALARCONVERTER_ERROR_ILLEGAL_CHARS "Illegal chars: "

# define SC_INT "int: "
# define SC_CHAR "char: "
# define SC_FLOAT "float: "
# define SC_DOUBLE "double: "

# define SC_CHAR_NON_DISPLAY "non displayable"
# define SC_IMPOSIBLE_CONVERSION "impossible"

# define SC_FLOAT_END ".0f"
# define SC_DOUBLE_END ".0"

# define LIMIT_TO_ADD_END 1000000

class ScalarConverter
{
	public:
		//Convert
		//-------------------------------------------------------

		static void	convert(string s);

	private:
		//Conversions
		//-------------------------------------------------------

		static void			convert_int(string s);
		static void			convert_char(string s);
		static void			convert_float(string s);
		static void			convert_double(string s);
		static t_data_type	getDataType(string s);
		static void			convert_exceptions(string s);

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