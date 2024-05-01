# include "MutantStack/MutantStack.hpp"

static void	test_log(void)
{
	static int	i;

	cout << "------------------------------------TEST " << i << endl;
	i++;
}

int		main(void)
{
	{
		MutantStack<int>	mt;

		cout << mt.size() << endl;
		mt.push(10);
		cout << mt.size() << endl;
		mt.pop();
		cout << mt.size() << endl;
	}
	test_log();
	{
		MutantStack<int>	mt;

		for (int i = 0; i <= 9; i++)
			mt.push(i);
		for (MutantStack<int>::iterator it = mt.begin(); it != mt.end(); it++)
		{
			cout << *it << endl;
		}
	}
	test_log();
	{
		MutantStack<int>	mt;

		for (int i = 0; i <= 9; i++)
			mt.push(i);
		for (MutantStack<int>::iterator it = mt.begin(); it != mt.end(); it++)
		{
			cout << *it << endl;
			if (*it == 4)
				*it = 30;
		}
		cout << endl;
		for (MutantStack<int>::iterator it = mt.begin(); it != mt.end(); it++)
		{
			cout << *it << endl;
		}
	}
	test_log();
	{
		MutantStack<int>	mt;

		for (int i = 0; i <= 9; i++)
			mt.push(i);
		for (MutantStack<int>::reverse_iterator it = mt.rbegin(); it != mt.rend(); it++)
		{
			cout << *it << endl;
			if (*it == 4)
				*it = 30;
		}
		cout << endl;
		for (MutantStack<int>::reverse_iterator it = mt.rbegin(); it != mt.rend(); it++)
		{
			cout << *it << endl;
		}
	}
	test_log();
}