#include "Array/Array.hpp"
#include "Array/Array.tpp"


int	main(void)
{
	Array<int>	r;

	cout << r[0] << endl;
	r[0] = 1;
	cout << r[0] << endl;
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
	s[5] = '\0';
	for (u_int i = 0; i < s.size(); i++)
		cout << s[i];
	cout << endl;
	cout << s.size() << endl;
	string	str = "Hello";
	cout << str.size() << endl;
	Array<string> s2 = s;
	s2[4] = '!';
	for (u_int i = 0; i < s2.size(); i++)
		cout << s2[i];
	cout << endl;
	for (u_int i = 0; i < s.size(); i++)
		cout << s[i];
	cout << endl;
}	