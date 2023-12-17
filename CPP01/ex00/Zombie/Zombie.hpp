#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# pragma once

# include <iostream>
# include <string>

class Zombie
{
	public:
		//CONSTRUCTOR
		//-------------------------------------------------------

		Zombie(std::string name);
		Zombie(const Zombie &Zombie);
		~Zombie();
		Zombie & operator = (const Zombie &Zombie);

		//Zombies
		//------------------------------------------------------
		Zombie	*newZombie(std::string	name);
		void	randomChump(std::string name);
		void	announce(void);

	private:
		std::string	_name;

};

#endif