#ifndef HARL_HPP
# define HARL_HPP

# pragma once

# include <iostream>
# include <string>

# define CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define RESET_COLOR "\033[0m"

class Harl
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		Harl();
		Harl(const Harl &Harl);
		~Harl();
		Harl & operator = (const Harl &Harl);

		//-------------------------------------------------------

		void	complain(std::string level);

	private:
		bool	_do_log;

		//COMPLAINS
		//-------------------------------------------------------

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif