#include "RPN.hpp"

#pragma region CONSTRUCTOR

void	RPN::constructor_log(string s)
{
	if (_do_log)
	{
		cout << RPN_CONSTRUCTOR_LOG_COLOR;
		cout << s;
		cout << RPN_RESET_COLOR << endl;
	}
}

RPN::RPN() :
_do_log(RPN_DEFAULT_DO_LOG)
{
	constructor_log(RPN_DEFAULT_CONSTRUCTOR_LOG);
}

RPN::RPN(bool log) :
_do_log(log)
{
	constructor_log(RPN_DEFAULT_CONSTRUCTOR_LOG);
}

RPN::~RPN()
{
	constructor_log(RPN_DESTRUCTOR_LOG);
}

RPN::RPN(const RPN &RPN) :
_do_log(RPN._do_log)
{
	constructor_log(RPN_COPY_CONSTRUCTOR_LOG);
}

RPN & RPN::operator= (const RPN &RPN)
{
	constructor_log(RPN_COPY_ASSIGNMENT_LOG);
	if (this != & RPN)
	{
		this->_do_log = RPN._do_log;
	}
	return (*this);
}

#pragma endregion
