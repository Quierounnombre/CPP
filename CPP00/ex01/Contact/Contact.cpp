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
		this->_darkest_secret_that_totally_shouldnt_be_store_in_a_database = Contact._darkest_secret_that_totally_shouldnt_be_store_in_a_database;
		this->_first_name = Contact._first_name;
		this->_last_name = Contact._last_name;
		this->_nickname = Contact._nickname;
		this->_phone_number = Contact._phone_number;
	}
	return *this;
}
