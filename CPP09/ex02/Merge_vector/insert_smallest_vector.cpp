#include "../PmergeMe.hpp"

void	PmergeMe::insert_smallest_vector(std::vector<std::vector<int> > &vector,
									std::vector<int> &bigger_vector)
{
	for
	(
		std::vector<std::vector<int> >::iterator	it = vector.begin();
		it != vector.end();
		it++
	)
	{
		if (bigger_vector.front() == it->front())
		{
			bigger_vector.insert(bigger_vector.begin(), it->back());
			vector.erase(it);
			break ;
		}
	}
}
