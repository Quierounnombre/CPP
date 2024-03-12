#include "A.hpp"

#pragma region CONSTRUCTOR

void	A::constructor_log(string s)
{
	if (_do_log)
	{
		cout << A_CONSTRUCTOR_LOG_COLOR;
		cout << s;
		cout << A_RESET_COLOR << endl;
	}
}

A::~A()
{
	constructor_log(A_DESTRUCTOR_LOG);
}

#pragma endregion
