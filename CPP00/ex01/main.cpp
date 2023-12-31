#include "PhoneBook/PhoneBook.hpp"
#include "Contact/Contact.hpp"

int	main()
{
	PhoneBook	Phone;
	std::string	str;

	while (std::getline(std::cin, str))
	{
		if (std::cin.eof())
			exit(1);
		if (str == "ADD")
			Phone.add_contact();
		if (str == "SEARCH")
			Phone.search_contact();
		if (str == "EXIT")
			break ;
	}
}
