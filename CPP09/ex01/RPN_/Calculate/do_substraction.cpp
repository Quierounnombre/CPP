# include "../RPN.hpp"

void	RPN::do_substraction(void)
{
	int	first;
	int	second;
	int	result;

	first = stack.top();
	stack.pop();
	second = stack.top();
	stack.pop();
	result = first - second;
	stack.push(result);
}