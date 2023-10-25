#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _current(0)
{

}

PhoneBook::~PhoneBook()
{

}

PhoneBook::PhoneBook(const PhoneBook &PhoneBook)
{

}

PhoneBook & PhoneBook::operator= (const PhoneBook &PhoneBook)
{
	if (this != & PhoneBook)
	{
	}
	return *this;
}