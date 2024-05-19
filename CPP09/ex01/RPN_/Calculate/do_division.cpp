# include "../RPN_.hpp"

void	RPN_::do_division(void)
{
	int	first;
	int	second;
	int	result;

	first = stack.top();
	stack.pop();
	second = stack.top();
	stack.pop();
	if (second == 0)
		throw std::logic_error(ERROR_DIVISION_BY_CERO);
	result = first / second;
	stack.push(result);
}