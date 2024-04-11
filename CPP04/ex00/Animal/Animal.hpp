#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# pragma once

# include <iostream>
# include <string>

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define ANIMAL_CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define ANIMAL_RESET_COLOR "\033[0m"
# define ANIMAL_DEFAULT_DO_LOG true

# define u_int	u_int32_t
# define n_int	int32_t

class Animal
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		Animal();
		Animal(bool log);
		Animal(const Animal &Animal);
		virtual	~Animal();
		Animal & operator = (const Animal &Animal);

		//GETTERS
		//-------------------------------------------------------

		string	getType(void) const;

		//SETTERS
		//-------------------------------------------------------

		void	setType(string new_type);

		//Sounds
		//-------------------------------------------------------

		virtual void	makeSound(void) const;

	protected:
		bool	_do_log;
		string	type;

	private:
		//LOG
		//-------------------------------------------------------

		void	constructor_log(string s);
};

#endif