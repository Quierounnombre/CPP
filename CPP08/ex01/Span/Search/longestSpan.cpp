#include "../Span.hpp"

u_int	Span::longestSpan(void)
{
	std::vector<int>::iterator	max_element;
	std::vector<int>::iterator	min_element;
	u_int	r;

	r = 0;
	if (_stored.size() < 2)
		throw(std::out_of_range(SPAN_CONTAIN_FEW_NUMBERS));
	max_element = std::max_element(_stored.begin(), _stored.end());
	min_element = std::min_element(_stored.begin(), _stored.end());
	r = *max_element - *min_element;
	return (r);
}
