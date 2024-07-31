#include "../ScalarConverter.hpp"

void	ScalarConverter::convert_float(string s)
{
	n_int	i;
	char	c;
	float	f;
	double	d;

	f = (float)atof(s.c_str());
	c = (char)f;
	if (isprint(c))
		cout << SC_CHAR << c << endl;
	else
		cout << SC_CHAR << SC_CHAR_NON_DISPLAY << endl;
	i = (int)f;
	cout << SC_INT << i << endl;
	cout << SC_FLOAT << f;
	cout << endl;
	d = (double)f;
	cout << SC_DOUBLE << d;
	cout << endl;
}
