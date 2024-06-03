# include "../PmergeMe.hpp"

# define MIN_LIST_SIZE 1

void	PmergeMe::order_vector_pairs(std::vector<std::vector<int> > &vector)
{
	int				tmp_value;

	tmp_value = 0;
	for 
	(
	std::vector<std::vector<int> >::iterator it = vector.begin();
	it != vector.end();
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
