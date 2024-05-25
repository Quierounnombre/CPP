#include "PmergeMe.hpp"

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define TEST_PASSED "Test Passed "
# define TEST_FAILED "Test Failed "
# define RESET "\033[0m"

class tester : public PmergeMe
{
	public:
		void	test_split_even_lst(int test_number)
		{
			std::list<int>				lst;
			std::list<std::list<int> >	nested_lst;
			int							lst_size;

			lst.push_back(1);
			lst.push_back(6);
			lst.push_back(3);
			lst.push_back(4);
			lst.push_back(5);
			lst.push_back(8);
			lst.push_back(2);
			lst.push_back(7);
			lst_size = lst.size();
			nested_lst = split_lst_in_half(lst);
			if (lst_size / 2 == (int)nested_lst.size())
				cout << GREEN << TEST_PASSED;
			else
				cout << RED << TEST_FAILED;
			cout << RESET << test_number << endl;
		}
		void	test_split_odd_lst(int test_number)
		{
			std::list<int>				lst;
			std::list<std::list<int> >	nested_lst;
			int							lst_size;

			lst.push_back(1);
			lst.push_back(6);
			lst.push_back(3);
			lst.push_back(4);
			lst.push_back(5);
			lst.push_back(8);
			lst.push_back(2);
			lst.push_back(7);
			lst.push_back(0);
			lst_size = lst.size();
			nested_lst = split_lst_in_half(lst);
			if ((lst_size / 2) + 1 == (int)nested_lst.size())
				cout << GREEN << TEST_PASSED;
			else
				cout << RED << TEST_FAILED;
			cout << RESET << test_number << endl;
		}
		void	test_order_splited_lst(int test_number)
		{
			std::list<int>				lst;
			std::list<std::list<int> >	nested_lst;
			bool						flag;

			flag = false;
			lst.push_back(1);
			lst.push_back(6);
			lst.push_back(3);
			lst.push_back(4);
			lst.push_back(5);
			lst.push_back(8);
			lst.push_back(2);
			lst.push_back(7);
			nested_lst = split_lst_in_half(lst);
			order_lst_pairs(nested_lst);
			for
			(
				std::list<std::list<int> >::iterator it = nested_lst.begin();
				it != nested_lst.end();
				it++
			)
			{
				if (it->front() < it->back())
					flag = true;
			}
			if (!flag)
				cout << GREEN << TEST_PASSED;
			else
				cout << RED << TEST_FAILED;
			cout << RESET << test_number << endl;
		}
};

void	test_colecction(void)
{
	int		n_test;
	tester	tester;

	n_test = 0;
	tester.test_split_even_lst(++n_test);
	tester.test_split_odd_lst(++n_test);
	tester.test_order_splited_lst(++n_test);
}


int main(void)
{
	try
	{
		test_colecction();
	}
	catch(const std::exception& e)
	{
		cerr << e.what() << endl;
	}
	
}
