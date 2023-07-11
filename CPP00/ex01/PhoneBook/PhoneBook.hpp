#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# pragma once
# include <iostream>
# include "../Contact/Contact.hpp"

# ifndef N_CONTACTS
#  define N_CONTACTS 8
# endif

class PhoneBook
{
	public:
		PhoneBook();
		PhoneBook(const PhoneBook &PhoneBook);
		~PhoneBook();
		PhoneBook & operator = (const PhoneBook &PhoneBook);

		//--------------------------------------------------
		//CMDS

		void	add_contact();

	private:
		Contact	_contact[N_CONTACTS];
		int		_current;

};

#endif