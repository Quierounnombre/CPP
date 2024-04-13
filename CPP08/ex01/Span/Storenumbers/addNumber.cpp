#include "../Span.hpp"

void	Span::addNumber(n_int n)
{
	if (_stored.size() <= _max_size)
		_stored.push_back(n);
	else
		throw(std::out_of_range(SPAN_MAX_SIZE_REACHED));
}
