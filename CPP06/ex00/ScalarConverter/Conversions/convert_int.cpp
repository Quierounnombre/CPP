#include "../ScalarConverter.hpp"

# define LIMIT_TO_ADD_END 100000

void	ScalarConverter::convert_int(string s)
{
	u_int	i;
	char	c;
	float	f;
	double	d;

	i = atoi(s.c_str());
	if (isprint(i))
	{
		c = (char) i;
		cout << SC_CHAR << c << endl;
	}
	else
		cout << SC_CHAR << SC_CHAR_NON_DISPLAY << endl;
	cout << SC_INT << i << endl;
	f = (float)i;
	cout << SC_FLOAT << f;
	if (i < LIMIT_TO_ADD_END)
		cout << SC_FLOAT_END;
	cout << endl;
	d = (double)i;
	cout << SC_DOUBLE << d;
	if (i < LIMIT_TO_ADD_END)
		cout << SC_DOUBLE_END;
	cout << endl;
}
