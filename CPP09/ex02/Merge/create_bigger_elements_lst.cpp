#include "../PmergeMe.hpp"

std::list<int>	PmergeMe::create_bigger_elements_lst(std::list<std::list<int> >	&lst)
{
	std::list<int>	new_lst;

	for
	(
		std::list<std::list<int> >::iterator	it = lst.begin();
		it != lst.end();
		it++
	)
	{
		new_lst.push_back(it->front());
	}
	return (new_lst);
}
