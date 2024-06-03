# include "../PmergeMe.hpp"

# define NEXT_ELEMENT 1

static void	store_inner_list
(
std::vector<int> &vector,
std::vector<std::vector<int> > &splited_vector
)
{
	std::vector<int>	empty_vector;

	empty_vector.push_back(vector.front());
	vector.erase(vector.begin(), vector.begin() + NEXT_ELEMENT);
    if (vector.size())
    {
	    empty_vector.push_back(vector.front());
		vector.erase(vector.begin(), vector.begin() + NEXT_ELEMENT);
    }
	splited_vector.push_back(empty_vector);
}

std::vector<std::vector<int> >	PmergeMe::split_vector_in_half(std::vector<int> &vector)
{
	std::vector<std::vector<int> >	splited_vector;

	while (vector.size())
	{
		store_inner_list(vector, splited_vector);
	}
    return (splited_vector);
}
