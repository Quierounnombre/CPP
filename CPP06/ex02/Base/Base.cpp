#include "Base.hpp"

#pragma region CONSTRUCTOR

void	Base::constructor_log(string s)
{
	if (_do_log)
	{
		cout << BASE_CONSTRUCTOR_LOG_COLOR;
		cout << s;
		cout << BASE_RESET_COLOR << endl;
	}
}

Base::~Base()
{
	constructor_log(BASE_DESTRUCTOR_LOG);
}

#pragma endregion
