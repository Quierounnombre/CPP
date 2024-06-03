#include "../PmergeMe.hpp"

void	PmergeMe::MergeLst(std::list<int> &lst)
{
	std::list<std::list<int> >	nested_lst;
	std::list<int>				tmp_lst;

	nested_lst = split_lst_in_half(lst);
	order_lst_pairs(nested_lst);
	tmp_lst = create_bigger_elements_lst(nested_lst);
	while (nested_lst.size())
	{
		insert_next_element_in_lst(nested_lst, tmp_lst);
	}
	lst = tmp_lst;
}
