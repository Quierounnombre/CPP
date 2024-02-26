#ifndef AFORM_HPP
# define AFORM_HPP

# pragma once

# include <iostream>
# include <string>

# include "../Bureaucrat/Bureaucrat.hpp"

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define AFORM_CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define AFORM_RESET_COLOR "\033[0m"
# define AFORM_DEFAULT_DO_LOG false

# define AFORM_DEFAULT_CONSTRUCTOR_LOG "AForm default constructor called"
# define AFORM_COPY_CONSTRUCTOR_LOG "AForm copy constructor called"
# define AFORM_COPY_ASSIGNMENT_LOG "AForm copy assignment called"
# define AFORM_DESTRUCTOR_LOG "AForm destructor called"

# define AFORM_DEFAULT_SIGNED_STATUS false

# define u_int	u_int32_t
# define n_int	int32_t

class Bureaucrat;

class AForm
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		AForm(string name, n_int grade_to_sign, n_int grade_to_execute);
		AForm(string name, n_int grade_to_sign, n_int grade_to_execute, bool log);
		AForm(const AForm &AForm);
		~AForm();
		AForm & operator = (const AForm &AForm);

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

std::ostream &operator<<(std::ostream &out, const AForm &f);

#endif