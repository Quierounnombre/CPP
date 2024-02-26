#ifndef FORMALREADYSIGNED_HPP
# define FORMALREADYSIGNED_HPP

# pragma once

# include <iostream>
# include <string>

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define FORMALREADYSIGNED_CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define FORMALREADYSIGNED_RESET_COLOR "\033[0m"
# define FORMALREADYSIGNED_DEFAULT_DO_LOG false

# define FORMALREADYSIGNED_DEFAULT_CONSTRUCTOR_LOG "FormAlreadySigned default constructor called"
# define FORMALREADYSIGNED_COPY_CONSTRUCTOR_LOG "FormAlreadySigned copy constructor called"
# define FORMALREADYSIGNED_COPY_ASSIGNMENT_LOG "FormAlreadySigned copy assignment called"
# define FORMALREADYSIGNED_DESTRUCTOR_LOG "FormAlreadySigned destructor called"

# define u_int	u_int32_t
# define n_int	int32_t

class FormAlreadySigned : public std::exception
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		FormAlreadySigned(string name);
		FormAlreadySigned(string name, bool log);
		FormAlreadySigned(const FormAlreadySigned &FormAlreadySigned);
		~FormAlreadySigned() _NOEXCEPT;
		FormAlreadySigned & operator = (const FormAlreadySigned &FormAlreadySigned);

		//WHAT
		//-------------------------------------------------------

		const char	*what() const _NOEXCEPT;

	protected:
		bool	_do_log;

	private:
		string	_name;
		//LOG
		//-------------------------------------------------------

		void	constructor_log(string s);
};

#endif