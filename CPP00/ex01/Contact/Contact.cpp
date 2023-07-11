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
	return (this->_first_name);
}

std::string