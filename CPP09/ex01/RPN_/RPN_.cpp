#include "RPN_.hpp"

#pragma region CONSTRUCTOR

void	RPN_::constructor_log(string s)
{
	if (_do_log)
	{
		cout << RPN_CONSTRUCTOR_LOG_COLOR;
		cout << s;
		cout << RPN_RESET_COLOR << endl;
	}
}

RPN_::RPN_() :
_do_log(RPN_DEFAULT_DO_LOG)
{
	constructor_log(RPN_DEFAULT_CONSTRUCTOR_LOG);
}

RPN_::RPN_(bool log) :
_do_log(log)
{
	constructor_log(RPN_DEFAULT_CONSTRUCTOR_LOG);
}

RPN_::~RPN_()
{
	constructor_log(RPN_DESTRUCTOR_LOG);
}

RPN_::RPN_(const RPN_ &RPN_) :
_do_log(RPN_._do_log)
{
	constructor_log(RPN_COPY_CONSTRUCTOR_LOG);
}

RPN_ & RPN_::operator= (const RPN_ &RPN_)
{
	constructor_log(RPN_COPY_ASSIGNMENT_LOG);
	if (this != & RPN_)
	{
		this->_do_log = RPN_._do_log;
	}
	return (*this);
}

#pragma endregion
