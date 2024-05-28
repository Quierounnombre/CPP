#include "../PmergeMe.hpp"

std::list<int>	PmergeMe::create_bigger_elements_lst(std::list<std::list<int> >	&lst)
{
	std::list<int>	new_lst;
	std::list<int>	tmp_lst;

	for
	(
		std::list<std::list<int> >::iterator	it = lst.begin();
		it != lst.end();
		it++
	)
	{
		tmp_lst.push_front(it->front());
		new_lst.merge(tmp_lst);
		tmp_lst.empty();
	}
	return (new_lst);
}
