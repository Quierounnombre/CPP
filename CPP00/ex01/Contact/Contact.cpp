#include "Contact.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}

Contact::Contact(const Contact &Contact)
{

}

Contact & Contact::operator= (const Contact &Contact)
{
	if (this != & Contact)
	{
	}
	return *this;
}

std::string	Contact::get_first_name()
{
	return(this->_first_name);
}

std::string Contact::get_last_name()
{
	return(this->_last_name);
}

std::string Contact::get_nickname()
{
	return(this->_nickname);
}

std::string	Contact::get_dark_thingy()
{
	return(this->_darkest_secret_that_totally_shouldnt_be_store_in_a_database);
}

int	Contact::get_phone_number()
{
	return(this->_phone_number);
}

void	Contact::set_dark_thingy(std::string	str)
{
	this->_darkest_secret_that_totally_shouldnt_be_store_in_a_database = str;
}

void	Contact::set_first_name(std::string	str)
{
	this->_first_name = str;
}

void	Contact::set_last_name(std::string	str)
{
	this->_last_name = str;
}

void	Contact::set_nickname(std::string	str)
{
	this->_nickname = str;
}

void	Contact::set_phonenumber(int	num)
{
	this->_phone_number	= num;
}