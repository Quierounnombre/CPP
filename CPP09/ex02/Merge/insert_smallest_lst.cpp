#include "../PmergeMe.hpp"

void	PmergeMe::insert_smallest_lst(std::list<std::list<int> > &lst,
									std::list<int> &bigger_lst)
{
	for
	(
		std::list<std::list<int> >::iterator	it = lst.begin();
		it != lst.end();
		it++
	)
	{
		if (bigger_lst.front() == it->front())
		{
			bigger_lst.push_front(it->back());
			break ;
		}
	}
}
