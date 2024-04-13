#include "../Span.hpp"

u_int	Span::get_number_closest_span(t_vec_it it)
{
	u_int	r;
	n_int	n1;
	n_int	n2;

	n1 = *it;
	it++;
	n2 = 0;
	r = std::numeric_limits<u_int>::max();
	while (it != _stored.end())
	{
		n2 = *it;
		if (r > (u_int)std::abs(n1 - n2))
			r = std::abs(n1 - n2);
		it++;
	}
	return (r);
}
