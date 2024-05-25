# include "../RPN.hpp"

void	RPN::calculate(string s)
{
	int		result;

	result = 0;
	check_string(s);
	for (string::iterator it = s.begin(); it != s.end(); it++)
	{
		if (isdigit(*it))
			stack.push(*it - '0');
		else if (*it != RPN_SEPARATOR_SIMBOL)
			select_operation(*it);
	}
	result = stack.top();
	stack.pop();
	cout << result << endl;
}
