#include "../PmergeMe.hpp"

bool	PmergeMe::is_lst_sorted(std::list<int> &lst)
{
	std::list<int>::iterator	previous;

	previous = lst.begin();
	for
	(
		std::list<int>::iterator	it = lst.begin();
		it != lst.end();
		it++
	)
	{
		if (*it < *previous)
			return (false);
		previous = it;
	}
	return (true);
}
