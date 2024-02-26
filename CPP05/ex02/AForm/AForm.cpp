#include "AForm.hpp"

#pragma region CONSTRUCTOR

void	AForm::constructor_log(string s)
{
	if (_do_log)
	{
		cout << AFORM_CONSTRUCTOR_LOG_COLOR;
		cout << s;
		cout << AFORM_RESET_COLOR << endl;
	}
}

AForm::AForm(string name, n_int grade_to_sign, n_int grade_to_execute) :
_do_log(AFORM_DEFAULT_DO_LOG),
_name(name),
_grade_to_sign(grade_to_sign),
_grade_to_execute(grade_to_execute),
_signed(AFORM_DEFAULT_SIGNED_STATUS)
{
	constructor_log(AFORM_DEFAULT_CONSTRUCTOR_LOG);
}

AForm::AForm(string name, n_int grade_to_sign, n_int grade_to_execute, bool log) :
_name(name),
_grade_to_sign(grade_to_sign),
_grade_to_execute(grade_to_execute),
_signed(AFORM_DEFAULT_SIGNED_STATUS),
_do_log(log)
{
	constructor_log(AFORM_DEFAULT_CONSTRUCTOR_LOG);
}

AForm::~AForm()
{
	constructor_log(AFORM_DESTRUCTOR_LOG);
}

AForm::AForm(const AForm &AForm) :
_do_log(AForm._do_log),
_signed(AForm._signed),
_name(AForm._name),
_grade_to_execute(AForm._grade_to_execute),
_grade_to_sign(AForm._grade_to_sign)
{
	constructor_log(AFORM_COPY_CONSTRUCTOR_LOG);
}

AForm & AForm::operator= (const AForm &AForm)
{
	constructor_log(AFORM_COPY_ASSIGNMENT_LOG);
	if (this != & AForm)
	{
	}
	this->_do_log = AForm._do_log;
	return (*this);
}

#pragma endregion

#pragma region GETTERS

string	AForm::getName(void) const
{
	return (this->_name);
}

bool	AForm::getSigned(void) const
{
	return (this->_signed);
}

n_int	AForm::getGradeToSign(void) const
{
	return (this->_grade_to_sign);
}

n_int	AForm::getGradeToExecute(void) const
{
	return (this->_grade_to_execute);
}

#pragma endregion

#pragma region OVERLOADS

std::ostream &operator<<(std::ostream &out, const AForm &f)
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

#pragma region SETTERS

void	AForm::setSigned(bool sign)
{
	this->_signed = sign;
}

#pragma endregion