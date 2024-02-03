#ifndef FIXED_HPP
# define FIXED_HPP

# pragma once

# include <iostream>
# include <string>
# include <cmath>

# define CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define RESET_COLOR "\033[0m"
# define DEFAULT_DO_LOG false

class Fixed
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		Fixed();
		Fixed(const int	num);
		Fixed(const float num);
		Fixed(const Fixed &Fixed);
		~Fixed();
		Fixed & operator = (const Fixed &Fixed);
		//Getters
		//-------------------------------------------------------

		int		getRawBits(void) const;
		//Setters
		//-------------------------------------------------------

		void	setRawBits(int const raw);
		//Float_conversors
		//-------------------------------------------------------

		float	toFloat(void) const;
		int		toInt(void) const;
		//OVERLOADS
		//-------------------------------------------------------

		bool	operator<(Fixed const &fxd) const;
		bool	operator>(Fixed const &fxd) const;
		bool	operator>=(Fixed const &fxd) const;
		bool	operator<=(Fixed const &fxd) const;
		bool	operator==(Fixed const &fxd) const;
		bool	operator!=(Fixed const &fxd) const;
		Fixed	operator+(Fixed const &fxd) const;
		Fixed	operator-(Fixed const &fxd) const;
		Fixed	operator*(Fixed const &fxd) const;
		Fixed	operator/(Fixed const &fxd) const;
		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);
		//COMPARASION
		//-------------------------------------------------------

		static Fixed		&min(Fixed &fxd_1, Fixed &fxd_2);
		static const Fixed	&min(Fixed const &fxd_1, Fixed const &fxd_2);
		static Fixed		&max(Fixed &fxd_1, Fixed &fxd_2);
		static const Fixed	&max(Fixed const &fxd_1, Fixed const &fxd_2);
		//-------------------------------------------------------
	private:
		int					_raw_value;
		static const int	_frac_bits = 8;
		bool				_do_log;
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);

#endif