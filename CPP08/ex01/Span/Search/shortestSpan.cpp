#include "../Span.hpp"

u_int	Span::shortestSpan(void)
{
	u_int	new_r;
	u_int	current_r;

	new_r = 0;
	if (_stored.size() < 2)
		throw(std::out_of_range(SPAN_CONTAIN_FEW_NUMBERS));
	current_r = std::numeric_limits<u_int>::max();
	std::sort(_stored.begin(), _stored.end());
	for (t_vec_it it = _stored.begin() ; it != _stored.end() ; it++)
	{
		new_r = get_number_closest_span(it);
		if (current_r > new_r)
			current_r = new_r;
	}
	return (current_r);
}
