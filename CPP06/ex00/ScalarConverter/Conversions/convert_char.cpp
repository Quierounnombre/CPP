#include "../ScalarConverter.hpp"

void	ScalarConverter::convert_char(string s)
{
	n_int	i;
	char	c;
	float	f;
	double	d;

	c = s[0];
	if (isprint(c))
		cout << SC_CHAR << c << endl;
	else
		cout << SC_CHAR << SC_CHAR_NON_DISPLAY << endl;
	i = (int)c;
	cout << SC_INT << i << endl;
	f = (float)c;
	cout << SC_FLOAT << f;
	if (i < LIMIT_TO_ADD_END)
		cout << SC_FLOAT_END;
	cout << endl;
	d = (double)c;
	cout << SC_DOUBLE << d;
	if (i < LIMIT_TO_ADD_END)
		cout << SC_DOUBLE_END;
	cout << endl;
}
