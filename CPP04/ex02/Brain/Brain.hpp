#ifndef BRAIN_HPP
# define BRAIN_HPP

# pragma once

# include <iostream>
# include <string>

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define BRAIN_CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define BRAIN_RESET_COLOR "\033[0m"
# define BRAIN_DEFAULT_DO_LOG true

# define BRAIN_DEFAULT_CONSTRUCTOR_LOG "Brain default constructor called"
# define BRAIN_COPY_CONSTRUCTOR_LOG "Brain copy constructor called"
# define BRAIN_COPY_ASSIGNMENT_LOG "Brain copy assignment called"
# define BRAIN_DESTRUCTOR_LOG "Brain destructor called"

# define BRAIN_IDEA_NOT_FOUND "Can't find the idea"

# define BRAIN_SIZE 100

# define u_int	u_int32_t
# define n_int	int32_t

class Brain
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		Brain();
		Brain(bool log);
		Brain(const Brain &Brain);
		~Brain();
		Brain & operator = (const Brain &Brain);

		//GETTERS
		//-------------------------------------------------------

		string	getIdea(int i) const;

	protected:
		bool	_do_log;
		string	ideas[BRAIN_SIZE];

	private:
		//LOG
		//-------------------------------------------------------

		void	constructor_log(string s);
};

#endif