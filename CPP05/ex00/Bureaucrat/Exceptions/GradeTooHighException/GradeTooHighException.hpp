#ifndef GRADETOOHIGHEXCEPTION_HPP
# define GRADETOOHIGHEXCEPTION_HPP

# pragma once

# include <iostream>
# include <string>

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define GRADETOOHIGHEXCEPTION_CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define GRADETOOHIGHEXCEPTION_RESET_COLOR "\033[0m"
# define GRADETOOHIGHEXCEPTION_DEFAULT_DO_LOG false

# define GRADETOOHIGHEXCEPTION_DEFAULT_CONSTRUCTOR_LOG "GradeTooHighException default constructor called"
# define GRADETOOHIGHEXCEPTION_COPY_CONSTRUCTOR_LOG "GradeTooHighException copy constructor called"
# define GRADETOOHIGHEXCEPTION_COPY_ASSIGNMENT_LOG "GradeTooHighException copy assignment called"
# define GRADETOOHIGHEXCEPTION_DESTRUCTOR_LOG "GradeTooHighException destructor called"

# define u_int	u_int32_t
# define n_int	int32_t

class GradeTooHighException
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		GradeTooHighException(n_int grade);
		GradeTooHighException(n_int grade, bool log);
		GradeTooHighException(const GradeTooHighException &GradeTooHighException);
		~GradeTooHighException();
		GradeTooHighException & operator = (const GradeTooHighException &GradeTooHighException);

		//WHAT
		//-------------------------------------------------------

		const string what() const;

	protected:
		bool	_do_log;

	private:
		const n_int	_max_grade;

		//LOG
		//-------------------------------------------------------

		void	constructor_log(string s);
};

#endif