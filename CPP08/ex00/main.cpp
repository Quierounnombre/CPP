#include "easyfind.hpp"

void foo() { throw std::runtime_error("oops"); }
void bar() {}
struct S {};
int	main(void)
{
	std::cout << noexcept(foo()) << '\n'; // prints 0
	std::cout << noexcept(bar()) << '\n'; // prints 0
	std::cout << noexcept(1 + 1) << '\n'; // prints 1
	std::cout << noexcept(S()) << '\n'; // prints 1
}