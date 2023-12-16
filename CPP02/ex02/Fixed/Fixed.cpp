#include "Fixed.hpp"

#pragma region CONSTRUCTOR

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
_raw_value(num << _frac_bits)
{
	if (_do_log)
	{
		std::cout << CONSTRUCTOR_LOG_COLOR;
		std::cout << "Int constructor called";
		std::cout << RESET_COLOR << std::endl;
	}
}

Fixed::Fixed(const float num) :
_do_log(DEFAULT_DO_LOG)
{
	if (_do_log)
	{
		std::cout << CONSTRUCTOR_LOG_COLOR;
		std::cout << "Float constructor called";
		std::cout << RESET_COLOR << std::endl;
	}
	_raw_value = (int)std::floor((num * (1 << _frac_bits)) + 0.5);
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
	this->_do_log = Fixed._do_log;
	this->_raw_value = Fixed._raw_value;
	return (*this);
}

#pragma endregion

#pragma region SETTERS

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

#pragma endregion

#pragma region GETTERS

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

#pragma endregion

#pragma region FLOAT_CONVERSOR

float	Fixed::toFloat(void) const
{
	float value;

	value = (float)_raw_value / (1 << (_frac_bits));
	return (value);
}

int		Fixed::toInt(void) const
{
	return (_raw_value >> _frac_bits);
}

#pragma endregion

#pragma region OPERATOR_OVERLOADS

std::ostream &operator<<(std::ostream &out, const Fixed &f)
{
	out << f.toFloat();
	return (out);
}

bool	Fixed::operator!=(Fixed const &fxd) const
{
	if (this->_raw_value != fxd._raw_value)
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const &fxd) const
{
	if (this->_raw_value <= fxd._raw_value)
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const &fxd) const
{
	if (this->_raw_value >= fxd._raw_value)
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const &fxd) const
{
	if (this->_raw_value == fxd._raw_value)
		return (true);
	return (false);
}

bool	Fixed::operator>(Fixed const &fxd) const
{
	if (this->_raw_value > fxd._raw_value)
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const &fxd) const
{
	if (this->_raw_value < fxd._raw_value)
		return (true);
	return (false);
}

Fixed	Fixed::operator*(Fixed const &fxd) const
{
	Fixed	r;

	r = Fixed(this->toFloat() * fxd.toFloat());
	return (r);
}

Fixed	Fixed::operator-(Fixed const &fxd) const
{
	Fixed	r;

	r = Fixed(this->toFloat() - fxd.toFloat());
	return (r);
}

Fixed	Fixed::operator+(Fixed const &fxd) const
{
	Fixed	r;

	r = Fixed(this->toFloat() + fxd.toFloat());
	return (r);
}

Fixed	Fixed::operator/(Fixed const &fxd) const
{
	Fixed	r;

	r = Fixed(this->toFloat() / fxd.toFloat());
	return (r);
}

Fixed	&Fixed::operator++(void)
{
	this->_raw_value++;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	this->_raw_value--;
	return (*this);
}

Fixed	&Fixed::operator++(int)
{
	Fixed	tmp = *this;

	this->_raw_value++;
	return (tmp);
}

Fixed	&Fixed::operator--(int)
{
	Fixed	tmp = *this;

	this->_raw_value--;
	return (tmp);
}

Fixed	&Fixed::min(Fixed &fxd_1, Fixed &fxd_2)
{
	if (fxd_1 < fxd_2)
		return (fxd_1);
	return (fxd_2);
}

const Fixed	&Fixed::min(const Fixed &fxd_1, const Fixed &fxd_2)
{
	if (fxd_1 < fxd_2)
		return (fxd_1);
	return (fxd_2);
}

Fixed	&Fixed::max(Fixed &fxd_1, Fixed &fxd_2)
{
	if (fxd_1 > fxd_2)
		return (fxd_1);
	return (fxd_2);
}

const Fixed	&Fixed::max(const Fixed &fxd_1, const Fixed &fxd_2)
{
	if (fxd_1 > fxd_2)
		return (fxd_1);
	return (fxd_2);
}

#pragma endregion