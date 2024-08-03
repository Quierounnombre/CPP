#include "Array/Array.hpp"
#include "Array/Array.tpp"


int	main(void)
{
	Array<int>	r;

	try
	{
		cout << "0: ";
		cout << r[0] << endl;
	}
	catch (const std::exception& e)
	{
		cerr << e.what() << endl;
	}
	try
	{
		cout << "1: ";
		cout << r[1] << endl;
	}
	catch (const std::exception& e)
	{
		cerr << e.what() << endl;
	}
	try
	{
		cout << "2: ";
		cout << r[454] << endl;
	}
	catch (const std::exception& e)
	{
		cerr << e.what() << endl;
	}
	try
	{
		cout << "3: ";
		cout << r[-454] << endl;
	}
	catch (const std::exception& e)
	{
		cerr << e.what() << endl;
	}
	try
	{
		cout << "4: ";
		cout << r[-0] << endl;
	}
	catch (const std::exception& e)
	{
		cerr << e.what() << endl;
	}
	try
	{
		cout << "5: ";
		cout << r[-1] << endl;
	}
	catch (const std::exception& e)
	{
		cerr << e.what() << endl;
	}
	cout << "r size = " << r.size() << endl;
	Array<string> s(5);
	s[0] = 'H';
	s[1] = 'e';
	s[2] = 'l';
	s[3] = 'l';
	s[4] = 'o';
	try
	{
		s[5] = '\0';
	}
	catch (const std::exception& e)
	{
		cerr << e.what() << endl;
	}
	for (u_int i = 0; i < s.size(); i++)
		cout << s[i];
	cout << endl;
	try
	{
		for (u_int i = 0; i <= s.size(); i++)
			cout << s[i];
	}
	catch (const std::exception &e)
	{
		cerr << e.what() << endl;
	}
	cout << endl;
	cout << s.size() << endl;
	Array<string> s2 = s;
	s2[4] = '!';
	for (u_int i = 0; i < s2.size(); i++)
		cout << s2[i];
	cout << endl;
	for (u_int i = 0; i < s.size(); i++)
		cout << s[i];
	cout << endl;
}	