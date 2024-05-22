# include "../PmergeMe.hpp"

static void	store_inner_list
(
std::list<int> &lst,
std::list<std::list<int> > &lst_of_splitted
)
{
	std::list<int>	empty_list;

	empty_list.push_back(lst.front());
	lst.pop_front();
    if (lst.size())
    {
	    empty_list.push_back(lst.front());
	    lst.pop_front();
    }
	lst_of_splitted.push_back(empty_list);
}

std::list<std::list<int> >	PmergeMe::split_lst_in_half(std::list<int> &lst)
{
	std::list<std::list<int> >	lst_of_splitted;

	while (lst.size())
	{
		store_inner_list(lst, lst_of_splitted);
	}
    return (lst_of_splitted);
}
