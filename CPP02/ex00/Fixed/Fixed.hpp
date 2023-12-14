#ifndef FIXED_HPP
# define FIXED_HPP

# pragma once

# include <iostream>
# include <string>

# define CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define RESET_COLOR "\033[0m"

class Fixed
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		Fixed();
		Fixed(const Fixed &Fixed);
		~Fixed();
		Fixed & operator = (const Fixed &Fixed);
		//Getters
		//-------------------------------------------------------

		int		getRawBits(void);
		//Setters
		//-------------------------------------------------------

		void	setRawBits(int const raw);
		//-------------------------------------------------------

	private:
		int					_num_value;
		static const int	frac_bits = 8;
		bool				_do_log;
};

#endif