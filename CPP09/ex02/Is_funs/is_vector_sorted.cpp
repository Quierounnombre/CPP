#include "../PmergeMe.hpp"

bool	PmergeMe::is_vector_sorted(std::vector<int> &vector)
{
	std::vector<int>::iterator	previous;

	previous = vector.begin();
	for
	(
		std::vector<int>::iterator	it = vector.begin();
		it != vector.end();
		it++
	)
	{
		if (*it < *previous)
			return (false);
		previous = it;
	}
	return (true);
}
