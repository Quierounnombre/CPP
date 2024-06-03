# include "../PmergeMe.hpp"

void	PmergeMe::put_vector_in_cout(std::vector<int> vector)
{
	for
	(
		std::vector<int>::iterator	it = vector.begin();
		it != vector.end();
		it++
	)
	{
		cout << *it << " ";
	}
	cout << endl;
}
