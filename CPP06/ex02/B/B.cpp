#include "B.hpp"

#pragma region CONSTRUCTOR

void	B::constructor_log(string s)
{
	if (_do_log)
	{
		cout << B_CONSTRUCTOR_LOG_COLOR;
		cout << s;
		cout << B_RESET_COLOR << endl;
	}
}

B::~B()
{
	constructor_log(B_DESTRUCTOR_LOG);
}

#pragma endregion
