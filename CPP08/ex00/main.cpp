#include "easyfind.hpp"
#include "easyfind.tpp"

int	main(void)
{
    std::vector<int> vec;
	std::vector<int> vec2;
	std::vector<int> vec3;

	vec2.push_back(0);

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

	try
	{
		std::cout << easyfind(vec, 2) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << easyfind(vec, 20) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << easyfind(vec2, 0) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << easyfind(vec3, 0) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}