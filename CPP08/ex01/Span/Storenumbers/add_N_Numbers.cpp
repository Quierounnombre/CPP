#include "../Span.hpp"

void	Span::add_N_Numbers(u_int n)
{
	std::srand(std::time(NULL));
	for (u_int i = 0; i < n; i++)
	{
		addNumber(std::rand());
	}
}