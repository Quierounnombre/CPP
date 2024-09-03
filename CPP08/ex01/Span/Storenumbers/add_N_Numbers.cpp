#include "../Span.hpp"

void	Span::add_N_Numbers(t_vec_it start, t_vec_it end)
{
	_stored.insert(_stored.end(), start, end);
	if (_stored.size() > _max_size)
		throw(std::out_of_range(SPAN_MAX_SIZE_REACHED));
}