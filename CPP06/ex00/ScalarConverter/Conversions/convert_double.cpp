#include "../ScalarConverter.hpp"

void	ScalarConverter::convert_double(string s)
{
	n_int	i;
	char	c;
	float	f;
	double	d;

	d = atof(s.c_str());
	c = (char)d;
	if (isprint(c))
		cout << SC_CHAR << c << endl;
	else
		cout << SC_CHAR << SC_CHAR_NON_DISPLAY << endl;
	i = (int)d;
	cout << SC_INT << i << endl;
	f = (float)d;
	cout << SC_FLOAT << f;
	if (i < LIMIT_TO_ADD_END)
		cout << SC_FLOAT_END;
	cout << endl;
	cout << SC_DOUBLE << d;
	if (i < LIMIT_TO_ADD_END)
		cout << SC_DOUBLE_END;
	cout << endl;
}
