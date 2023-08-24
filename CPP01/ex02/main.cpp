#include <iostream>
#include <string>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*ptr_str;
	std::string	&ref_str = str;

	ptr_str = &str;

	std::cout << "str_addr = " << &str << std::endl;
	std::cout << "ptr_addr = " << &ptr_str << std::endl;
	std::cout << "ref_addr = " << &ref_str << std::endl;

	std::cout << "str_value = " << str << std::endl;
	std::cout << "ptr_value = " << ptr_str << std::endl;
	std::cout << "ref_value = " << ref_str << std::endl;
}