# include "../PmergeMe.hpp"

# define MIN_LIST_SIZE 1

void	PmergeMe::order_lst_pairs(std::list<std::list<int> > &lst)
{
	int				tmp_value;

	tmp_value = 0;
	for 
	(
	std::list<std::list<int> >::iterator it = lst.begin();
	it != lst.end();
	it++
	)
	{
		if (it->size() > MIN_LIST_SIZE)
		{
			if (it->back() > it->front())
			{
				tmp_value = it->front() ;
				it->front() = it->back();
				it->back() = tmp_value;
			}
		}
	}	
}

# undef MIN_LIST_SIZE
