#ifndef FORM_HPP
# define FORM_HPP

# pragma once

# include <iostream>
# include <string>

# include "../Bureaucrat/Bureaucrat.hpp"

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define FORM_CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define FORM_RESET_COLOR "\033[0m"
# define FORM_DEFAULT_DO_LOG false

# define FORM_DEFAULT_CONSTRUCTOR_LOG "Form default constructor called"
# define FORM_COPY_CONSTRUCTOR_LOG "Form copy constructor called"
# define FORM_COPY_ASSIGNMENT_LOG "Form copy assignment called"
# define FORM_DESTRUCTOR_LOG "Form destructor called"

# define FORM_DEFAULT_SIGNED_STATUS false

# define u_int	u_int32_t
# define n_int	int32_t

class Bureaucrat;

class Form
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		Form(string name, n_int grade_to_sign, n_int grade_to_execute);
		Form(string name, n_int grade_to_sign, n_int grade_to_execute, bool log);
		Form(const Form &Form);
		~Form();
		Form & operator = (const Form &Form);

		//GETTERS
		//-------------------------------------------------------

		string	getName(void) const;
		bool	getSigned(void) const;
		n_int	getGradeToSign(void) const;
		n_int	getGradeToExecute(void) const;

		//STATUS
		//-------------------------------------------------------

		void	beSigned(Bureaucrat &B);
	protected:
		bool	_do_log;

	private:
		string		_name;
		bool		_signed;
		const n_int	_grade_to_sign;
		const n_int	_grade_to_execute;

		//LOG
		//-------------------------------------------------------

		void	constructor_log(string s);
};

std::ostream &operator<<(std::ostream &out, const Form &f);

#endif