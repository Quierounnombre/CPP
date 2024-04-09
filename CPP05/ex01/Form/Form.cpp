#include "Form.hpp"

#pragma region CONSTRUCTOR

void	Form::constructor_log(string s)
{
	if (_do_log)
	{
		cout << FORM_CONSTRUCTOR_LOG_COLOR;
		cout << s;
		cout << FORM_RESET_COLOR << endl;
	}
}

Form::Form(string name, n_int grade_to_sign, n_int grade_to_execute) :
_do_log(FORM_DEFAULT_DO_LOG),
_name(name),
_signed(FORM_DEFAULT_SIGNED_STATUS),
_grade_to_sign(grade_to_sign),
_grade_to_execute(grade_to_execute)
{
	constructor_log(FORM_DEFAULT_CONSTRUCTOR_LOG);
}

Form::Form(string name, n_int grade_to_sign, n_int grade_to_execute, bool log) :
_do_log(log),
_name(name),
_signed(FORM_DEFAULT_SIGNED_STATUS),
_grade_to_sign(grade_to_sign),
_grade_to_execute(grade_to_execute)
{
	constructor_log(FORM_DEFAULT_CONSTRUCTOR_LOG);
}

Form::~Form()
{
	constructor_log(FORM_DESTRUCTOR_LOG);
}

Form::Form(const Form &Form) :
_do_log(Form._do_log),
_name(Form._name),
_signed(Form._signed),
_grade_to_sign(Form._grade_to_sign),
_grade_to_execute(Form._grade_to_execute)
{
	constructor_log(FORM_COPY_CONSTRUCTOR_LOG);
}

Form & Form::operator= (const Form &Form)
{
	constructor_log(FORM_COPY_ASSIGNMENT_LOG);
	if (this != & Form)
	{
	}
	this->_do_log = Form._do_log;
	return (*this);
}

#pragma endregion

#pragma region GETTERS

string	Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getSigned(void) const
{
	return (this->_signed);
}

n_int	Form::getGradeToSign(void) const
{
	return (this->_grade_to_sign);
}

n_int	Form::getGradeToExecute(void) const
{
	return (this->_grade_to_execute);
}

#pragma endregion

#pragma region OVERLOADS

std::ostream &operator<<(std::ostream &out, const Form &f)
{
	out << "Form name: " << f.getName() << endl;
	out << "Status:	";
	if (f.getSigned())
		out << "Approved" << endl;
	else
		out << "Denied" << endl;
	out << "Grade required to sign: " << f.getGradeToSign() << endl;
	out << "Grade required to execute: " << f.getGradeToExecute() << endl;
	return (out);
}

#pragma endregion