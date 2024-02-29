#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# pragma once

# include <iostream>
# include <string>

# include "../AForm/AForm.hpp"

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define PRESIDENTIALPARDONFORM_CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define PRESIDENTIALPARDONFORM_RESET_COLOR "\033[0m"
# define PRESIDENTIALPARDONFORM_DEFAULT_DO_LOG false

# define PRESIDENTIALPARDONFORM_DEFAULT_CONSTRUCTOR_LOG "PresidentialPardonForm default constructor called"
# define PRESIDENTIALPARDONFORM_COPY_CONSTRUCTOR_LOG "PresidentialPardonForm copy constructor called"
# define PRESIDENTIALPARDONFORM_COPY_ASSIGNMENT_LOG "PresidentialPardonForm copy assignment called"
# define PRESIDENTIALPARDONFORM_DESTRUCTOR_LOG "PresidentialPardonForm destructor called"

# define PRESIDENTIALPARDONFORM_SIGN_REQS 25
# define PRESIDENTIALPARDONFORM_EXEC_REQS 5

# define u_int	u_int32_t
# define n_int	int32_t

class AForm;

class PresidentialPardonForm : public AForm
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		PresidentialPardonForm(string target);
		PresidentialPardonForm(string target, bool log);
		PresidentialPardonForm(const PresidentialPardonForm &PresidentialPardonForm);
		~PresidentialPardonForm();
		PresidentialPardonForm & operator = (const PresidentialPardonForm &PresidentialPardonForm);

		//STATUS
		//-------------------------------------------------------

		void	execute(Bureaucrat const &B) const;

	protected:
		bool	_do_log;

	private:
		//LOG
		//-------------------------------------------------------

		void	constructor_log(string s);
};

#endif