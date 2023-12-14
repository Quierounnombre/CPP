#include "Fixed.hpp"

Fixed::Fixed() :
_do_log(true),
_num_value(0)
{
	if (_do_log)
	{
		std::cout << CONSTRUCTOR_LOG_COLOR;
		std::cout << "Default constructor called";
		std::cout << RESET_COLOR << std::endl;
	}
}

Fixed::~Fixed()
{
	if (_do_log)
	{
		std::cout << CONSTRUCTOR_LOG_COLOR;
		std::cout << "Destructor called";
		std::cout << RESET_COLOR << std::endl;
	}
}

Fixed::Fixed(const Fixed &Fixed) :
_do_log(Fixed._do_log),
_num_value(Fixed._num_value)
{
	if (_do_log)
	{
		std::cout << CONSTRUCTOR_LOG_COLOR;
		std::cout << "Copy constructor called";
		std::cout << RESET_COLOR << std::endl;
	}
}

Fixed & Fixed::operator= (const Fixed &Fixed)
{
	if (_do_log)
	{
		std::cout << CONSTRUCTOR_LOG_COLOR;
		std::cout << "Copy assignment called";
		std::cout << RESET_COLOR << std::endl;
	}
	if (this != & Fixed)
	{
	}
	return (*this);
}

int	Fixed::getRawBits(void)
{
	if (_do_log)
	{
		std::cout << CONSTRUCTOR_LOG_COLOR;
		std::cout << "getRawBits member function called";
		std::cout << RESET_COLOR << std::endl;
	}
	return (this->_num_value);
}

void	Fixed::setRawBits(int const raw)
{
	if (_do_log)
	{
		std::cout << CONSTRUCTOR_LOG_COLOR;
		std::cout << "setRawBits member function called";
		std::cout << RESET_COLOR << std::endl;
	}
	this->_num_value = raw;
}