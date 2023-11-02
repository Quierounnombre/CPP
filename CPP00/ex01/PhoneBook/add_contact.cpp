#include "PhoneBook.hpp"

static void	store_dark(Contact& contact)
{
	std::string	str;

	while (true)
	{
		std::cout << "I am trustworthy, tell me yout darkest secret:\n";
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(1);
		if (!(str.empty()))
		{
			contact.set_dark_thingy(str);
			break ;
		}
		std::cout << "Empty string is not admited\n";
	}
}

void	store_first(Contact& contact)
{
	std::string	str;

	while (true)
	{
		std::cout << "Now that we have some trust going on, ";
		std::cout << "what is your name?\n";
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(1);
		if (!(str.empty()))
		{
			contact.set_first_name(str);
			break ;
		}
		std::cout << "Empty string is not admited, baka\n";
	}
}

void	store_nick(Contact& contact)
{
	std::string	str;

	while (true)
	{
		std::cout << "Ok, i totally dont want to supplant your identity, ";
		std::cout << "at all. . . how your friends call u?\n";
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(1);
		if (!(str.empty()))
		{
			contact.set_nickname(str);
			break ;
		}
		std::cout << "Empty string is not admited\n";
	}
}

void	store_last(Contact& contact)
{
	std::string	str;

	while (true)
	{
		std::cout << "Ok, i totally dont want to supplant your identity, what";
		std::cout << " is your last name?\n";
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(1);
		if (!(str.empty()))
		{
			contact.set_last_name(str);
			break ;
		}
		std::cout << "Empty string is not admited\n";
	}
}

static bool	is_number_correct(std::string str)
{
	int		i;

	i = 0;
	while (i < str.length())
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (false);
		i++;
	}
	return (true);
}

static void	store_phone(Contact& contact)
{
	std::string	str;
	int			num;
	int			i;

	i = 0;
	while (true)
	{
		num = 0;
		std::cout << "This have been a lovely interaction, can i have your ";
		std::cout << "phone number?\n";
		std::getline(std::cin, str);
		if (std::cin.eof())
			exit(1);
		if (!(str.empty()) && is_number_correct(str))
		{
			{
				contact.set_phonenumber(str);
				break ;
			}
		}
		std::cout << "Empty string is not admited\n";
	}
}

void	PhoneBook::add_contact()
{
	std::string	str;
	Contact		contact;
	
	contact = this->_contact[this->_current];
	store_dark(contact);
	store_first(contact);
	store_last(contact);
	store_nick(contact);
	store_phone(contact);
	this->_contact[this->_current] = contact;
	if (_current == 7)
		_current = 0;
	else
		_current++;
}