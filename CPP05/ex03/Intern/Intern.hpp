#ifndef INTERN_HPP
# define INTERN_HPP

# pragma once

# include <iostream>
# include <string>

# include "../AForm/AForm.hpp"
# include "../PresidentialPardonForm/PresidentialPardonForm.hpp"
# include "../RobotomyRequestForm/RobotomyRequestForm.hpp"
# include "../ShrubberyCreationForm/ShrubberyCreationForm.hpp"

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define INTERN_CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define INTERN_RESET_COLOR "\033[0m"
# define INTERN_DEFAULT_DO_LOG false

# define INTERN_DEFAULT_CONSTRUCTOR_LOG "Intern default constructor called"
# define INTERN_COPY_CONSTRUCTOR_LOG "Intern copy constructor called"
# define INTERN_COPY_ASSIGNMENT_LOG "Intern copy assignment called"
# define INTERN_DESTRUCTOR_LOG "Intern destructor called"

# define INTERN_PARDON "PresidentialPardonForm"
# define INTERN_ROBOT "RobotmyRequestForm"
# define INTERN_SHRUBBERY "ShrubberyCreationForm"

# define INTERN_MAX_FORMS 3

# define INTERN_CANT_CREATE_FORM "Intern can't create form"
# define INTERN_CREATE "Intern creates "

# define u_int	u_int32_t
# define n_int	int32_t

class AForm;

class Intern
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		Intern(void);
		Intern(bool log);
		Intern(const Intern &Intern);
		~Intern();
		Intern & operator = (const Intern &Intern);

		//SLAVE WORKS
		//-------------------------------------------------------

		AForm	*makeForm(string form_name, string target);

	protected:
		bool	_do_log;

	private:
		//LOG
		//-------------------------------------------------------

		void	constructor_log(string s);
};

#endif