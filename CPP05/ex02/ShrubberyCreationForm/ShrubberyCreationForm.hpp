#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# pragma once

# include <iostream>
# include <string>
# include <fstream>

# include "../AForm/AForm.hpp"

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define SHRUBBERYCREATIONFORM_CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define SHRUBBERYCREATIONFORM_RESET_COLOR "\033[0m"
# define SHRUBERRYCRATIONFORM_DEFAULT_DO_LOG false

# define SHRUBBERYCREATIONFORM_DEFAULT_CONSTRUCTOR_LOG "ShruberryCrationForm default constructor called"
# define SHRUBBERYCREATIONFORM_COPY_CONSTRUCTOR_LOG "ShruberryCrationForm copy constructor called"
# define SHRUBBERYCREATIONFORM_COPY_ASSIGNMENT_LOG "ShruberryCrationForm copy assignment called"
# define SHRUBBERYCREATIONFORM_DESTRUCTOR_LOG "ShruberryCrationForm destructor called"

# define SHRUBBERYCREATIONFORM_FILE_NAME "shrubbery"

# define SHRUBBERYCREATIONFORM_SIGN_REQS 145
# define SHRUBBERYCREATIONFORM_EXEC_REQS 137

# define SHRUBBERYCREATIONFORM_TREE \
"       _-_\n\
    /~~   ~~\\\n\
 /~~         ~~\\\n\
{               }\n\
 \\  _-     -_  /\n\
   ~  \\\\ //  ~\n\
_- -   | | _- _\n\
  _ -  | |   -_\n\
      // \\\n"


# define u_int	u_int32_t
# define n_int	int32_t

class ShrubberyCreationForm : public AForm
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		ShrubberyCreationForm(string name);
		ShrubberyCreationForm(string name, bool log);
		ShrubberyCreationForm(const ShrubberyCreationForm &ShruberryCrationForm);
		~ShrubberyCreationForm();
		ShrubberyCreationForm & operator = (const ShrubberyCreationForm &ShruberryCrationForm);

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