# include <iostream>
# include <string>

static void	my_to_upper(std::string &str)
{
	int		i;

	i = 0;
	while(str[i])
	{
		str[i] = std::toupper(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	std::string	str;

	argv++;
	if (*argv)
	{
		while (*argv)
		{
			str = *argv;
			my_to_upper(str);
			std::cout << str;
			argv++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}