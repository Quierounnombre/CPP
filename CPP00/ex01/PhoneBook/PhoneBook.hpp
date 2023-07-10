#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# pragma once

class PhoneBook
{
	public:
		PhoneBook();
		PhoneBook(const PhoneBook &PhoneBook);
		~PhoneBook();
		PhoneBook & operator = (const PhoneBook &PhoneBook);

	private:

};

#endif