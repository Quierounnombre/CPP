#include "C.hpp"

#pragma region CONSTRUCTOR

void	C::constructor_log(string s)
{
	if (_do_log)
	{
		cout << C_CONSTRUCTOR_LOG_COLOR;
		cout << s;
		cout << C_RESET_COLOR << endl;
	}
}

C::~C()
{
	constructor_log(C_DESTRUCTOR_LOG);
}

#pragma endregion
