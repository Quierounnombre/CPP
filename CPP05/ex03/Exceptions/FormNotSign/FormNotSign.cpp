#include "FormNotSign.hpp"

#pragma region CONSTRUCTOR

void	FormNotSign::constructor_log(string s)
{
	if (_do_log)
	{
		cout << FORMNOTSIGN_CONSTRUCTOR_LOG_COLOR;
		cout << s;
		cout << FORMNOTSIGN_RESET_COLOR << endl;
	}
}

FormNotSign::FormNotSign(string name) :
_name(name),
_do_log(FORMNOTSIGN_DEFAULT_DO_LOG)
{
	constructor_log(FORMNOTSIGN_DEFAULT_CONSTRUCTOR_LOG);
}

FormNotSign::FormNotSign(string name, bool log) :
_name(name),
_do_log(log)
{
	constructor_log(FORMNOTSIGN_DEFAULT_CONSTRUCTOR_LOG);
}

FormNotSign::~FormNotSign() _NOEXCEPT
{
	constructor_log(FORMNOTSIGN_DESTRUCTOR_LOG);
}

FormNotSign::FormNotSign(const FormNotSign &FormNotSign) :
_name(FormNotSign._name),
_do_log(FormNotSign._do_log)
{
	constructor_log(FORMNOTSIGN_COPY_CONSTRUCTOR_LOG);
}

FormNotSign & FormNotSign::operator= (const FormNotSign &FormNotSign)
{
	constructor_log(FORMNOTSIGN_COPY_ASSIGNMENT_LOG);
	if (this != & FormNotSign)
	{
	}
	this->_do_log = FormNotSign._do_log;
	return (*this);
}

#pragma endregion


const char	*FormNotSign::what() const _NOEXCEPT
{
	string	s;

	s = _name;
	s.append(" is not signed");
	return (s.c_str());
}