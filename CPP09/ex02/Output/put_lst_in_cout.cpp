#include "../PmergeMe.hpp"

void	PmergeMe::put_lst_in_cout(std::list<int> lst)
{
	for
	(
		std::list<int>::iterator it = lst.begin();
		it != lst.end();
		it++
	)
	{
		cout << *it << " ";
	}
	cout << endl;
} 
