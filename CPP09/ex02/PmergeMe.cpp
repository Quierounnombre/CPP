#include "PmergeMe.hpp"

#pragma region CONSTRUCTOR

void	PmergeMe::constructor_log(string s)
{
	if (_do_log)
	{
		cout << PMERGEME_CONSTRUCTOR_LOG_COLOR;
		cout << s;
		cout << PMERGEME_RESET_COLOR << endl;
	}
}

PmergeMe::PmergeMe() :
_do_log(PMERGEME_DEFAULT_DO_LOG)
{
	constructor_log(PMERGEME_DEFAULT_CONSTRUCTOR_LOG);
}

PmergeMe::PmergeMe(bool log) :
_do_log(log)
{
	constructor_log(PMERGEME_DEFAULT_CONSTRUCTOR_LOG);
}

PmergeMe::~PmergeMe()
{
	constructor_log(PMERGEME_DESTRUCTOR_LOG);
}

PmergeMe::PmergeMe(const PmergeMe &PmergeMe) :
_do_log(PmergeMe._do_log)
{
	constructor_log(PMERGEME_COPY_CONSTRUCTOR_LOG);
}

PmergeMe & PmergeMe::operator= (const PmergeMe &PmergeMe)
{
	constructor_log(PMERGEME_COPY_ASSIGNMENT_LOG);
	if (this != & PmergeMe)
	{
	}
	this->_do_log = PmergeMe._do_log;
	return (*this);
}

#pragma endregion
