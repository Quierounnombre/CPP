#include "../PmergeMe.hpp"

static void	merge_vectors(std::vector<int> &new_vector, std::vector<int> &tmp_vector)
{
	bool	flag;

	flag = false;
	for
	(
		std::vector<int>::iterator	it = new_vector.begin();
		it != new_vector.end();
		it++
	)
	{
		if (*it > tmp_vector.front())
		{
			new_vector.insert(it, tmp_vector.front());
			flag = true;
			break ;
		}
	}
	if (!flag)
		new_vector.push_back(tmp_vector.front());
}

std::vector<int>	PmergeMe::create_bigger_elements_vector(std::vector<std::vector<int> >	&vector)
{
	std::vector<int>	new_vector;
	std::vector<int>	tmp_vector;

	for
	(
		std::vector<std::vector<int> >::iterator	it = vector.begin();
		it != vector.end();
		it++
	)
	{
		tmp_vector.push_back(it->front());
		merge_vectors(new_vector, tmp_vector);
		tmp_vector.clear();
	}
	if (vector.size() % 2)
		vector.pop_back();
	return (new_vector);
}
