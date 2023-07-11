#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# pragma once
# include <iostream>
# include "../Contact/Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		PhoneBook(const PhoneBook &PhoneBook);
		~PhoneBook();
		PhoneBook & operator = (const PhoneBook &PhoneBook);

	private:
		Contact	contact[8];

};

#endif