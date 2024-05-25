# include "../RPN.hpp"

void	RPN::select_operation(char c)
{
	if (stack.size() < MIN_FOR_OPERATION)
		throw std::logic_error(STACK_LACK_OPERANDS);
	if (c == RPN_MATH_DIVISION_SIMBOL)
		do_division();
	if ( c== RPN_MATH_MULTIPLICATION_SIMBOL)
		do_multiplication();
	if (c == RPN_MATH_MINUS_SIMBOL)
		do_substraction();
	if (c == RPN_MATH_PLUS_SIMBOL)
		do_addition();
}