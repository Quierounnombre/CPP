#include "PmergeMe.hpp"

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define TEST_PASSED "Test Passed "
# define TEST_FAILED "Test Failed "
# define RESET "\033[0m"

class tester : public PmergeMe
{
	public:
		//LST
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
		void	test_create_big_list(int test_number)
		{
			std::list<int>				lst;
			std::list<std::list<int> >	nested_lst;
			std::list<int>				big_elements_lst;
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
			big_elements_lst = create_bigger_elements_lst(nested_lst);
			# define EXPECTED_RESULTS 4
			if (big_elements_lst.size() != EXPECTED_RESULTS)
				flag = true;
			for
			(
				std::list<std::list<int> >::iterator nested_it = nested_lst.begin();
				nested_it != nested_lst.end();
				nested_it++
			)
			{
				for
				(
					std::list<int>::iterator it = big_elements_lst.begin();
					it != big_elements_lst.end();
					it++
				)
				{
					if (nested_it->front() != *it)
						flag = true;
					else
					{
						flag = false;
						break ;
					}
				}
			}
			if (flag)
				cout << RED << TEST_FAILED;
			else if (!is_lst_sorted(big_elements_lst))
				cout << RED << TEST_FAILED;
			else
				cout << GREEN << TEST_PASSED;
			cout << RESET << test_number << endl;
			# undef EXPECTED_RESULTS
		}
		void	test_insert_small_lst(int test_number)
		{
			std::list<int>				lst;
			std::list<std::list<int> >	nested_lst;
			std::list<int>				big_elements_lst;
			bool						flag;
			# define EXPECTED_RESULT 3

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
			big_elements_lst = create_bigger_elements_lst(nested_lst);
			insert_smallest_lst(nested_lst, big_elements_lst);

			if (big_elements_lst.front() != EXPECTED_RESULT)
				cout << RED << TEST_FAILED;
			else if (!is_lst_sorted(big_elements_lst))
				cout << RED << TEST_FAILED;
			else
				cout << GREEN << TEST_PASSED;
			cout << RESET << test_number << endl;
			# undef EXPECTED_RESULTS
		}
		void	test_insert_next_element(int test_number)
		{
			std::list<int>				lst;
			std::list<std::list<int> >	nested_lst;
			std::list<int>				big_elements_lst;

			lst.push_back(1);
			lst.push_back(6);
			lst.push_back(3);
			lst.push_back(4);
			lst.push_back(5);
			lst.push_back(8);
			lst.push_back(2);
			lst.push_back(7);
			lst.push_back(10);
			nested_lst = split_lst_in_half(lst);
			order_lst_pairs(nested_lst);
			big_elements_lst = create_bigger_elements_lst(nested_lst);
			insert_smallest_lst(nested_lst, big_elements_lst);
			insert_next_element_in_lst(nested_lst, big_elements_lst);
			insert_next_element_in_lst(nested_lst, big_elements_lst);
			insert_next_element_in_lst(nested_lst, big_elements_lst);
			if (!is_lst_sorted(big_elements_lst))
				cout << RED << TEST_FAILED;
			else
				cout << GREEN << TEST_PASSED;
			cout << RESET << test_number << endl;
		}
		void	test_order_lst(int test_number)
		{
			std::list<int>				lst;

			lst.push_back(1);
			lst.push_back(6);
			lst.push_back(3);
			lst.push_back(4);
			lst.push_back(5);
			lst.push_back(8);
			lst.push_back(2);
			lst.push_back(7);
			lst.push_back(10);
			MergeLst(lst);
			if (!is_lst_sorted(lst))
				cout << RED << TEST_FAILED;
			else
				cout << GREEN << TEST_PASSED;
			cout << RESET << test_number << endl;
		}
		//VECTOR
		void	test_split_even_vector(int test_number)
		{
			std::vector<int>				vector;
			std::vector<std::vector<int> >	nested_vector;
			int								vector_size;

			vector.push_back(1);
			vector.push_back(6);
			vector.push_back(3);
			vector.push_back(4);
			vector.push_back(5);
			vector.push_back(8);
			vector.push_back(2);
			vector.push_back(7);
			vector_size = vector.size();
			nested_vector = split_vector_in_half(vector);
			if (vector_size / 2 == (int)nested_vector.size())
				cout << GREEN << TEST_PASSED;
			else
				cout << RED << TEST_FAILED;
			cout << RESET << test_number << endl;
		}
		void	test_split_odd_vector(int test_number)
		{
			std::vector<int>				vector;
			std::vector<std::vector<int> >	nested_vector;
			int								vector_size;

			vector.push_back(1);
			vector.push_back(6);
			vector.push_back(3);
			vector.push_back(4);
			vector.push_back(5);
			vector.push_back(8);
			vector.push_back(2);
			vector.push_back(7);
			vector.push_back(0);
			vector_size = vector.size();
			nested_vector = split_vector_in_half(vector);
			if ((vector_size / 2) + 1 == (int)nested_vector.size())
				cout << GREEN << TEST_PASSED;
			else
				cout << RED << TEST_FAILED;
			cout << RESET << test_number << endl;
		}
		void	test_order_splited_vector(int test_number)
		{
			std::vector<int>				vector;
			std::vector<std::vector<int> >	nested_vector;
			bool							flag;

			flag = false;
			vector.push_back(1);
			vector.push_back(6);
			vector.push_back(3);
			vector.push_back(4);
			vector.push_back(5);
			vector.push_back(8);
			vector.push_back(2);
			vector.push_back(7);
			nested_vector = split_vector_in_half(vector);
			order_vector_pairs(nested_vector);
			for
			(
				std::vector<std::vector<int> >::iterator it = nested_vector.begin();
				it != nested_vector.end();
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
		void	test_create_big_vector(int test_number)
		{
			std::vector<int>				vector;
			std::vector<std::vector<int> >	nested_vector;
			std::vector<int>				big_elements_vector;
			bool						flag;

			flag = false;
			vector.push_back(1);
			vector.push_back(6);
			vector.push_back(3);
			vector.push_back(4);
			vector.push_back(5);
			vector.push_back(8);
			vector.push_back(2);
			vector.push_back(7);
			nested_vector = split_vector_in_half(vector);
			order_vector_pairs(nested_vector);
			big_elements_vector = create_bigger_elements_vector(nested_vector);
			# define EXPECTED_RESULTS 4
			if (big_elements_vector.size() != EXPECTED_RESULTS)
				flag = true;
			for
			(
				std::vector<std::vector<int> >::iterator nested_it = nested_vector.begin();
				nested_it != nested_vector.end();
				nested_it++
			)
			{
				for
				(
					std::vector<int>::iterator it = big_elements_vector.begin();
					it != big_elements_vector.end();
					it++
				)
				{
					if (nested_it->front() != *it)
						flag = true;
					else
					{
						flag = false;
						break ;
					}
				}
			}
			if (flag)
				cout << RED << TEST_FAILED;
			else if (!is_vector_sorted(big_elements_vector))
				cout << RED << TEST_FAILED;
			else
				cout << GREEN << TEST_PASSED;
			cout << RESET << test_number << endl;
		}
		void	test_insert_small_vector(int test_number)
		{
			std::vector<int>				vector;
			std::vector<std::vector<int> >	nested_vector;
			std::vector<int>				big_elements_vector;
			bool						flag;
			# define EXPECTED_RESULT 3

			flag = false;
			vector.push_back(1);
			vector.push_back(6);
			vector.push_back(3);
			vector.push_back(4);
			vector.push_back(5);
			vector.push_back(8);
			vector.push_back(2);
			vector.push_back(7);
	
			nested_vector = split_vector_in_half(vector);
			order_vector_pairs(nested_vector);
			big_elements_vector = create_bigger_elements_vector(nested_vector);
			insert_smallest_vector(nested_vector, big_elements_vector);
			if (big_elements_vector.front() != EXPECTED_RESULT)
				cout << RED << TEST_FAILED;
			else if (!is_vector_sorted(big_elements_vector))
				cout << RED << TEST_FAILED;
			else
				cout << GREEN << TEST_PASSED;
			cout << RESET << test_number << endl;
			# undef EXPECTED_RESULTS
		}
};

void	test_colecction(void)
{
	int		n_test;
	tester	tester;

	n_test = 0;
	//LST
	cout << "TEST lST" << endl;
	tester.test_split_even_lst(++n_test);
	tester.test_split_odd_lst(++n_test);
	tester.test_order_splited_lst(++n_test);
	tester.test_create_big_list(++n_test);
	tester.test_insert_small_lst(++n_test);
	tester.test_insert_next_element(++n_test);
	tester.test_order_lst(++n_test);
	//VECTOR
	cout << "TEST VECTOR" << endl;
	tester.test_split_even_vector(++n_test);
	tester.test_split_odd_vector(++n_test);
	tester.test_order_splited_lst(++n_test);
	tester.test_create_big_vector(++n_test);
	tester.test_insert_small_vector(++n_test);
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
