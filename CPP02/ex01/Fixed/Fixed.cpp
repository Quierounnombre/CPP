#include "Fixed.hpp"

Fixed::Fixed() :
_do_log(DEFAULT_DO_LOG),
_raw_value(0)
{
	if (_do_log)
	{
		std::cout << CONSTRUCTOR_LOG_COLOR;
		std::cout << "Default constructor called";
		std::cout << RESET_COLOR << std::endl;
	}
}

Fixed::Fixed(const int num) :
_do_log(DEFAULT_DO_LOG),
_raw_value(num)
{
	if (_do_log)
	{
		std::cout << CONSTRUCTOR_LOG_COLOR;
		std::cout << "Default constructor called";
		std::cout << RESET_COLOR << std::endl;
	}
}

Fixed::Fixed(const float num) :
_do_log(DEFAULT_DO_LOG),
_raw_value(num)
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
_raw_value(Fixed._raw_value)
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
	return (this->_raw_value);
}

void	Fixed::setRawBits(int const raw)
{
	if (_do_log)
	{
		std::cout << CONSTRUCTOR_LOG_COLOR;
		std::cout << "setRawBits member function called";
		std::cout << RESET_COLOR << std::endl;
	}
	this->_raw_value = raw;
}

float	Fixed::toFloat(void) const
{
	float value;

	value = (float)_raw_value / (1 << (_frac_bits - SHIFT_CORRECTION));
	return (value);
}

int		Fixed::toInt(void) const
{
	return (_raw_value);
}
