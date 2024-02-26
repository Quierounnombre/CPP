#ifndef GRADETOOLOWEXCEPTION_HPP
# define GRADETOOLOWEXCEPTION_HPP

# pragma once

# include <iostream>
# include <string>

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define GRADETOOLOWEXCEPTION_CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define GRADETOOLOWEXCEPTION_RESET_COLOR "\033[0m"
# define GRADETOOLOWEXCEPTION_DEFAULT_DO_LOG false

# define GRADETOOLOWEXCEPTION_DEFAULT_CONSTRUCTOR_LOG "GradeTooLowException default constructor called"
# define GRADETOOLOWEXCEPTION_COPY_CONSTRUCTOR_LOG "GradeTooLowException copy constructor called"
# define GRADETOOLOWEXCEPTION_COPY_ASSIGNMENT_LOG "GradeTooLowException copy assignment called"
# define GRADETOOLOWEXCEPTION_DESTRUCTOR_LOG "GradeTooLowException destructor called"

# define u_int	u_int32_t
# define n_int	int32_t

class GradeTooLowException : public std::exception
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		GradeTooLowException(n_int min_grade);
		GradeTooLowException(n_int min_grade, bool log);
		GradeTooLowException(const GradeTooLowException &GradeTooLowException);
		~GradeTooLowException() _NOEXCEPT;
		GradeTooLowException & operator = (const GradeTooLowException &GradeTooLowException);

		//WHAT
		//-------------------------------------------------------

		const char *what() const _NOEXCEPT;

	protected:
		bool	_do_log;

	private:
		const n_int	_min_grade;
		//LOG
		//-------------------------------------------------------

		void	constructor_log(string s);
};

#endif