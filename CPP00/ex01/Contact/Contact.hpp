#ifndef CONTACT_HPP
# define CONTACT_HPP

# pragma once

# include <iostream>
# include <string>

class Contact
{
	public:
		Contact();
		Contact(const Contact &Contact);
		~Contact();
		Contact & operator = (const Contact &Contact);
		std::string	get_first_name();
		std::string	get_last_name();
		std::string	get_nickname();
		int			get_phone_number();
		std::string	get_dark_thingy();

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		int			_phone_number;
		std::string	_darkest_secret_that_totally_shouldnt_be_store_in_a_database;
};

#endif