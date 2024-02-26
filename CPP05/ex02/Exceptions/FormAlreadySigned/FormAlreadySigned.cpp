#include "FormAlreadySigned.hpp"

#pragma region CONSTRUCTOR

void	FormAlreadySigned::constructor_log(string s)
{
	if (_do_log)
	{
		cout << FORMALREADYSIGNED_CONSTRUCTOR_LOG_COLOR;
		cout << s;
		cout << FORMALREADYSIGNED_RESET_COLOR << endl;
	}
}

FormAlreadySigned::FormAlreadySigned(string name) :
_name(name),
_do_log(FORMALREADYSIGNED_DEFAULT_DO_LOG)
{
	constructor_log(FORMALREADYSIGNED_DEFAULT_CONSTRUCTOR_LOG);
}

FormAlreadySigned::FormAlreadySigned(string name, bool log) :
_name(name),
_do_log(log)
{
	constructor_log(FORMALREADYSIGNED_DEFAULT_CONSTRUCTOR_LOG);
}

FormAlreadySigned::~FormAlreadySigned() _NOEXCEPT
{
	constructor_log(FORMALREADYSIGNED_DESTRUCTOR_LOG);
}

FormAlreadySigned::FormAlreadySigned(const FormAlreadySigned &FormAlreadySigned) :
_name(FormAlreadySigned._name),
_do_log(FormAlreadySigned._do_log)
{
	constructor_log(FORMALREADYSIGNED_COPY_CONSTRUCTOR_LOG);
}

FormAlreadySigned & FormAlreadySigned::operator= (const FormAlreadySigned &FormAlreadySigned)
{
	constructor_log(FORMALREADYSIGNED_COPY_ASSIGNMENT_LOG);
	if (this != & FormAlreadySigned)
	{
	}
	this->_do_log = FormAlreadySigned._do_log;
	return (*this);
}

#pragma endregion

#pragma region 	WHAT

const char	*FormAlreadySigned::what() const _NOEXCEPT
{
	string	s;

	s = _name;
	s.append(" is already signed");
	return (s.c_str());
}

#pragma endregion
