#ifndef CAT_HPP
# define CAT_HPP

# pragma once

# include <iostream>
# include "../Animal/Animal.hpp"
# include <string>

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define CAT_CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define CAT_RESET_COLOR "\033[0m"
# define CAT_DEFAULT_DO_LOG true

# define u_int	u_int32_t
# define n_int	int32_t

class Cat : virtual public Animal
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		Cat();
		Cat(bool log);
		Cat(const Cat &Cat);
		~Cat();
		Cat & operator = (const Cat &Cat);

		//-------------------------------------------------------

		//SOUNDS
		//-------------------------------------------------------

		virtual void	makeSound(void) const;

	protected:
		bool	_do_log;

	private:
		//LOG
		//-------------------------------------------------------

		void	constructor_log(string s);
};

#endif