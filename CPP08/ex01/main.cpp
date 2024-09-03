#include "Span/Span.hpp"

int		main(void)
{
	std::srand(std::time(NULL));
	{
		Span	sp(8);

		cout << "TEST 1" << endl;
		cout << "----------------------------" << endl;
		sp.addNumber(15);
		sp.addNumber(2);
		sp.addNumber(185);
		sp.addNumber(144);
		sp.addNumber(9);
		sp.addNumber(3);
		cout << sp << endl;
		cout << "long span = ";
		std::cout << sp.longestSpan() << std::endl;
		cout << "short span = ";
		std::cout << sp.shortestSpan() << std::endl;
		cout << endl;
	}
	{
		Span	sp(8);

		cout << "TEST 2" << endl;
		cout << "----------------------------" << endl;
		cout << sp << endl;
		cout << "long span = ";
		try
		{
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (const std::exception &e)
		{
			cout << e.what() << endl;
		}
		cout << "short span = ";
		try
		{
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch (const std::exception &e)
		{
			cout << e.what() << endl;
		}
		cout << endl;
	}
	{
		Span	sp(8);

		cout << "TEST 3" << endl;
		cout << "----------------------------" << endl;
		sp.addNumber(5);
		sp.addNumber(21);
		sp.addNumber(5);
		sp.addNumber(144);
		sp.addNumber(9);
		sp.addNumber(3);
		cout << sp << endl;
		cout << "long span = ";
		std::cout << sp.longestSpan() << std::endl;
		cout << "short span = ";
		std::cout << sp.shortestSpan() << std::endl;
		cout << endl;
	}
	try
	{
		Span	sp(80000);
		std::vector<int>	random_nums;

		for (int i = 0; i < 20000; i++)
		{
			random_nums.push_back(std::rand());
		}
		cout << "TEST 3" << endl;
		cout << "----------------------------" << endl;
		sp.add_N_Numbers(random_nums.begin(), random_nums.end());
		//cout << sp << endl;
		cout << "long span = ";
		std::cout << sp.longestSpan() << std::endl;
		cout << "short span = ";
		std::cout << sp.shortestSpan() << std::endl;
		cout << endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
