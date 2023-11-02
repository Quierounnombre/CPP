# include <iostream>
# include <string>

int main(int argc, char **argv)
{
	std::string	str;

	argv++;
	if (*argv)
	{
		while (*argv)
		{
			str = *argv;
			std::transform(str.begin(), str.end(), str.begin(), ::toupper);
			std::cout << str;
			argv++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
}