#include "PhoneBook.hpp"

static void	put_str_formated(std::string str)
{
	std::cout << std::setiosflags(std::ios_base::left);
	std::cout << std::setw(D_LENGTH);
	std::cout << std::setfill(' ');
	if (str.length() < D_LENGTH)
		std::cout << str;
	else
		std::cout << str.substr(0, D_LENGTH - 1) + ".";
}

static void contact_display(Contact &contact, bool in_grid)
{
	if (in_grid)
	{
		put_str_formated(contact.get_first_name());
		std::cout << "|";
		put_str_formated(contact.get_last_name());
		std::cout << "|";
		put_str_formated(contact.get_nickname());
		std::cout << "|";
		put_str_formated(contact.get_phone_number());
	}
	else
	{
		std::cout << contact.get_first_name() << std::endl;
		std::cout << contact.get_last_name() << std::endl;
		std::cout << contact.get_nickname() << std::endl;
		std::cout << contact.get_phone_number() << std::endl;
		std::cout << contact.get_dark_thingy() << std::endl;
	}
}

void	PhoneBook::search_contact()
{
	std::string	str;
	int			i;
	int			index;

	i = 0;
	std::cout <<  std::setiosflags(std::ios_base::left);
	while (i < N_CONTACTS)
	{
		contact_display(this->_contact[i], true);
		std::cout << std::endl;
		i++;
	}
	std::cout << "Type the number of the contact that u want to know" << std::endl;
	while (std::getline(std::cin, str))
	{
		if (std::cin.eof())
			exit(1);
		if (!str.empty())
		{
			try
			{
				index = std::stoi(str);
				index--;
			}
			catch(const std::exception& e)
			{
				index = -1;
			}
		}
		if ((index < 0 || index > (N_CONTACTS - 1)))
			std::cout << ERROR_SEARCH_OUT_OF_BOUNDS << std::endl;
		else
		{
			if (_contact[index].get_dark_thingy().empty())
			{
				std::cout << ERROR_SEARCH_EMPTY << std::endl;
				break ;
			}
			contact_display(_contact[index], false);
			break ;
		}
	}
}