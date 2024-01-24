#ifndef DOG_HPP
# define DOG_HPP

# pragma once

# include <iostream>
# include <string>
# include "../Animal/Animal.hpp"

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define DOG_CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define DOG_RESET_COLOR "\033[0m"
# define DOG_DEFAULT_DO_LOG false

# define u_int	u_int32_t
# define n_int	int32_t

class Dog : virtual public Animal
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		Dog();
		Dog(bool log);
		Dog(const Dog &Dog);
		~Dog();
		Dog & operator = (const Dog &Dog);

		//-------------------------------------------------------

	protected:
		bool	_do_log;

		//SOUNDS
		//-------------------------------------------------------

		virtual void makeSound(void);

	private:
		//LOG
		//-------------------------------------------------------

		void	constructor_log(string s);
};

#endif