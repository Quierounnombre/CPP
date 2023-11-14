#ifndef TESTER_HPP
# define TESTER_HPP

# pragma once

# include <iostream>
# include <string>
# include "../Sed/Sed.hpp"

class Sed;

class Tester
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		Tester();
		Tester(const Tester &Tester);
		~Tester();
		Tester & operator = (const Tester &Tester);

		//TEST
		//-------------------------------------------------------

		void	test_open_files(void);
	
	private:

};

#endif