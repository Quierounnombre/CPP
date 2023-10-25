#include "PhoneBook.hpp"

static std::string	format_string(std::string str)
{
	int	i;

	i = 0;
	if (str.length() > D_LENGTH)
	{
		str.resize(D_LENGTH);
		str[D_LENGTH - 1] = '.';
	}
	else if (str.length() < D_LENGTH)
	{
		i = str.length();
		str.resize(D_LENGTH);
		while (i < D_LENGTH)
		{
			str[i] = ' ';
			i++;
		}
	}
	return (str);
}

void	PhoneBook::search_contact()
{
	std::string	str;
	Contact		contact;
	int			i;

	i = 0;
	while (i < N_CONTACTS)
	{
		contact = this->_contact[i];
		str = format_string(contact.get_first_name());
		std::cout << str;
		std::cout << "|";
		str = format_string(contact.get_last_name());
		std::cout << str;
		std::cout << "|";
		str = format_string(contact.get_nickname());
		std::cout << str;
		std::cout << "|";
		str = format_string(contact.get_phone_number());
		std::cout << str;
		std::cout << std::endl;
		i++;
	}
}
