#include "../ScalarConverter.hpp"

void	ScalarConverter::convert_exceptions(string s)
{
	if (s == SC_NAN || s == SC_NANF)
	{
		cout << SC_CHAR << SC_IMPOSIBLE_CONVERSION << endl;
		cout << SC_INT << SC_IMPOSIBLE_CONVERSION << endl;
		cout << SC_FLOAT << SC_NANF << endl;
		cout << SC_DOUBLE << SC_NAN << endl;
	}
	if (s == SC_PLUS_INF || s == SC_PLUS_INFF)
	{
		cout << SC_CHAR << SC_IMPOSIBLE_CONVERSION << endl;
		cout << SC_INT << SC_IMPOSIBLE_CONVERSION << endl;
		cout << SC_FLOAT << SC_PLUS_INFF << endl;
		cout << SC_DOUBLE << SC_PLUS_INF << endl;
	}
	if (s == SC_MINUS_INF || s == SC_MINUS_INFF)
	{
		cout << SC_CHAR << SC_IMPOSIBLE_CONVERSION << endl;
		cout << SC_INT << SC_IMPOSIBLE_CONVERSION << endl;
		cout << SC_FLOAT << SC_MINUS_INFF << endl;
		cout << SC_DOUBLE << SC_MINUS_INF << endl;
	}
}
