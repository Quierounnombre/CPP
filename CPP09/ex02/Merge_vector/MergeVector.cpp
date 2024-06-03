#include "../PmergeMe.hpp"

void	PmergeMe::MergeVector(std::vector<int> &vector)
{
	std::vector<std::vector<int> >	nested_vector;
	std::vector<int>				tmp_vector;

	nested_vector = split_vector_in_half(vector);
	order_vector_pairs(nested_vector);
	tmp_vector = create_bigger_elements_vector(nested_vector);
	while (nested_vector.size())
	{
		insert_next_element_in_vector(nested_vector, tmp_vector);
	}
	vector = tmp_vector;
}
