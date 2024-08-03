#ifndef ARRAY_HPP
# define ARRAY_HPP

# pragma once

# include <iostream>
# include <string>

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define ARRAY_CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define ARRAY_RESET_COLOR "\033[0m"
# define ARRAY_DEFAULT_DO_LOG false

# define ARRAY_DEFAULT_CONSTRUCTOR_LOG "Array default constructor called"
# define ARRAY_COPY_CONSTRUCTOR_LOG "Array copy constructor called"
# define ARRAY_COPY_ASSIGNMENT_LOG "Array copy assignment called"
# define ARRAY_DESTRUCTOR_LOG "Array destructor called"

typedef unsigned int	u_int;
typedef int				n_int;

template <typename T>
class Array
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		Array();
		Array(u_int n);
		Array(const Array &Array);
		~Array();
		Array & operator = (const Array &Array);


		//OVERLOADS
		//-------------------------------------------------------

		T &operator[](unsigned i);

		//SIZE
		//-------------------------------------------------------

		u_int	size(void);

	protected:
		bool	_do_log;

	private:
		T		*_arr;
		u_int	_size;
		//LOG
		//-------------------------------------------------------

		void	constructor_log(std::string s);
};

#endif