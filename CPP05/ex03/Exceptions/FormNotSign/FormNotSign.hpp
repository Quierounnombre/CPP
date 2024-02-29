#ifndef FORMNOTSIGN_HPP
# define FORMNOTSIGN_HPP

# pragma once

# include <iostream>
# include <string>

# include "../../AForm/AForm.hpp"

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define FORMNOTSIGN_CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define FORMNOTSIGN_RESET_COLOR "\033[0m"
# define FORMNOTSIGN_DEFAULT_DO_LOG false

# define FORMNOTSIGN_DEFAULT_CONSTRUCTOR_LOG "FormNotSign default constructor called"
# define FORMNOTSIGN_COPY_CONSTRUCTOR_LOG "FormNotSign copy constructor called"
# define FORMNOTSIGN_COPY_ASSIGNMENT_LOG "FormNotSign copy assignment called"
# define FORMNOTSIGN_DESTRUCTOR_LOG "FormNotSign destructor called"

# define u_int	u_int32_t
# define n_int	int32_t

class AForm;

class FormNotSign : public std::exception
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		FormNotSign(string name);
		FormNotSign(string name, bool log);
		FormNotSign(const FormNotSign &FormNotSign);
		~FormNotSign() _NOEXCEPT;
		FormNotSign & operator = (const FormNotSign &FormNotSign);

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