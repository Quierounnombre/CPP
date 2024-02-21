#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# pragma once

# include <iostream>
# include <string>

# include "Exceptions/GradeTooHighException/GradeTooHighException.hpp"
# include "Exceptions/GradeTooLowException/GradeTooLowException.hpp"

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define BUREAUCRAT_CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define BUREAUCRAT_RESET_COLOR "\033[0m"
# define BUREAUCRAT_DEFAULT_DO_LOG false

# define MIN_BUREAUCRAT_GRADE 150
# define MAX_BUREAUCRAT_GRADE 1

# define BUREAUCRAT_DEFAULT_CONSTRUCTOR_LOG "Bureaucrat default constructor called"
# define BUREAUCRAT_COPY_CONSTRUCTOR_LOG "Bureaucrat copy constructor called"
# define BUREAUCRAT_COPY_ASSIGNMENT_LOG "Bureaucrat copy assignment called"
# define BUREAUCRAT_DESTRUCTOR_LOG "Bureaucrat destructor called"

# define u_int	u_int32_t
# define n_int	int32_t

class Bureaucrat
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		Bureaucrat(string name, n_int grade);
		Bureaucrat(string name, n_int grade, bool log);
		Bureaucrat(const Bureaucrat &Bureaucrat);
		~Bureaucrat();
		Bureaucrat & operator = (const Bureaucrat &Bureaucrat);

		//SETTERS
		//-------------------------------------------------------

		void	setGrade(n_int new_grade);

		//GETTERS
		//-------------------------------------------------------

		string	getName(void) const;
		n_int	getGrade(void) const;

		//GRADES
		//NOTE: 1 is the HIGHEST GRADE while 150 is the lowest
		//-------------------------------------------------------

		void	incrementGrade(n_int grade_change);
		void	decrementGrade(n_int grade_change);
		bool	check_grade_change(n_int delta);

		//-------------------------------------------------------

	protected:
		bool	_do_log;

	private:
		const string	_name;
		n_int	_grade;
		//LOG
		//-------------------------------------------------------

		void	constructor_log(string s);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &f);

#endif