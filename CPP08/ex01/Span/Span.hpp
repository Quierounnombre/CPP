#ifndef SPAN_HPP
# define SPAN_HPP

# pragma once

# include <iostream>
# include <vector>
# include <string>
# include <algorithm>
# include <limits>
# include <ctime>

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define SPAN_CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define SPAN_RESET_COLOR "\033[0m"
# define SPAN_DEFAULT_DO_LOG false

# define SPAN_DEFAULT_CONSTRUCTOR_LOG "Span default constructor called"
# define SPAN_COPY_CONSTRUCTOR_LOG "Span copy constructor called"
# define SPAN_COPY_ASSIGNMENT_LOG "Span copy assignment called"
# define SPAN_DESTRUCTOR_LOG "Span destructor called"

# define SPAN_MAX_SIZE_REACHED "Max size reached"
# define SPAN_CONTAIN_FEW_NUMBERS "Span contain 1 or less numbers"

# define u_int	u_int32_t
# define n_int	int32_t

typedef std::vector<int>::iterator	t_vec_it;

class Span
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		Span(u_int n);
		Span(u_int n, bool log);
		Span(const Span &Span);
		~Span();
		Span & operator = (const Span &Span);

		//Store numbers
		//-------------------------------------------------------

		void	addNumber(n_int n);
		void	add_N_Numbers(t_vec_it start, t_vec_it end);

		//Search
		//-------------------------------------------------------

		u_int	shortestSpan(void);
		u_int	longestSpan(void);

		//Represent
		//-------------------------------------------------------

		void	represent_span(void);

	protected:
		bool	_do_log;

	private:
		u_int				_max_size;
		std::vector<int>	_stored;

		//LOG
		//-------------------------------------------------------

		void	constructor_log(string s);

		//Search
		//-------------------------------------------------------

		u_int	get_number_closest_span(t_vec_it it);

};

std::ostream &operator<<(std::ostream &out, Span &f);

#endif