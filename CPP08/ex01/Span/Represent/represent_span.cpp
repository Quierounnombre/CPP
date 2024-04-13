#include "../Span.hpp"

void	Span::represent_span(void)
{
	for (t_vec_it it = _stored.begin(); it != _stored.end(); it++)
	{
		cout << *it << " ";
	}
}
