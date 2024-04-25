#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# pragma once

# include <iostream>
# include <string>

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define MUTANTSTACK_CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define MUTANTSTACK_RESET_COLOR "\033[0m"
# define MUTANTSTACK_DEFAULT_DO_LOG false

# define MUTANTSTACK_DEFAULT_CONSTRUCTOR_LOG "MutantStack default constructor called"
# define MUTANTSTACK_COPY_CONSTRUCTOR_LOG "MutantStack copy constructor called"
# define MUTANTSTACK_COPY_ASSIGNMENT_LOG "MutantStack copy assignment called"
# define MUTANTSTACK_DESTRUCTOR_LOG "MutantStack destructor called"

# define u_int	u_int32_t
# define n_int	int32_t

class MutantStack
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		MutantStack();
		MutantStack(bool log);
		MutantStack(const MutantStack &MutantStack);
		~MutantStack();
		MutantStack & operator = (const MutantStack &MutantStack);

		//-------------------------------------------------------

	protected:
		bool	_do_log;

	private:
		//LOG
		//-------------------------------------------------------

		void	constructor_log(string s);
};

#endif