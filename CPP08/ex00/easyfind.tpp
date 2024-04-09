#include "easyfind.hpp"

template<typename T>
int	easyfind(T t, int n)
{
	typename T::const_iterator	start;
	typename T::const_iterator	end;
	int	r_value;

	if (t.empty())
		throw(std::length_error(EASYFIND_EMPTY_CONTAINER));
	end	= t.end();
	start = t.begin();
	r_value = *std::find(start, end, n);
	if (r_value != n)
		throw (std::out_of_range(EASYFIND_VALUE_NOT_FOUND));
	return (r_value);
}
