#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# pragma once

# include <iostream>
# include <string>

# include "../AForm/AForm.hpp"

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define ROBOTOMYREQUESTFORM_CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define ROBOTOMYREQUESTFORM_RESET_COLOR "\033[0m"
# define ROBOTOMYREQUESTFORM_DEFAULT_DO_LOG false

# define ROBOTOMYREQUESTFORM_DEFAULT_CONSTRUCTOR_LOG "RobotomyRequestForm default constructor called"
# define ROBOTOMYREQUESTFORM_COPY_CONSTRUCTOR_LOG "RobotomyRequestForm copy constructor called"
# define ROBOTOMYREQUESTFORM_COPY_ASSIGNMENT_LOG "RobotomyRequestForm copy assignment called"
# define ROBOTOMYREQUESTFORM_DESTRUCTOR_LOG "RobotomyRequestForm destructor called"

# define ROBOTOMYREQUESTFORM_SIGN_REQS 72
# define ROBOTOMYREQUESTFORM_EXEC_REQS 45

# define u_int	u_int32_t
# define n_int	int32_t

class AForm;

class RobotomyRequestForm : public AForm
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		RobotomyRequestForm(string target);
		RobotomyRequestForm(string target, bool log);
		RobotomyRequestForm(const RobotomyRequestForm &RobotomyRequestForm);
		~RobotomyRequestForm();
		RobotomyRequestForm & operator = (const RobotomyRequestForm &RobotomyRequestForm);

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