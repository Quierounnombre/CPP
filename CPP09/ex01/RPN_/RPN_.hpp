#ifndef RPN__HPP
# define RPN__HPP

# pragma once

# include <iostream>
# include <string>
# include <stack>

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define RPN_CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define RPN_RESET_COLOR "\033[0m"
# define RPN_DEFAULT_DO_LOG false

# define RPN_DEFAULT_CONSTRUCTOR_LOG "RPN default constructor called"
# define RPN_COPY_CONSTRUCTOR_LOG "RPN copy constructor called"
# define RPN_COPY_ASSIGNMENT_LOG "RPN copy assignment called"
# define RPN_DESTRUCTOR_LOG "RPN destructor called"

# define RPN_MATH_MULTIPLICATION_SIMBOL '*'
# define RPN_MATH_DIVISION_SIMBOL '/'
# define RPN_MATH_PLUS_SIMBOL '+'
# define RPN_MATH_MINUS_SIMBOL '-'
# define RPN_SEPARATOR_SIMBOL ' '

# define ERROR_ILEGAL_CHARS "Certain token is illegal"
# define ERROR_ILEGAL_DISTANCE "Space between tokens in incorrect"
# define ERROR_INCORRECT_NUMBER_OF_OPERANDS "Number of operations/operand is incorrect"
# define INCORRECT_NUMBER_OF_ARGS "Number of args is incorrect"
# define ERROR_DIVISION_BY_CERO "There is a división by 0 in the notation, exiting"
# define MIN_FOR_OPERATION 2
# define STACK_LACK_OPERANDS "The stack lack operands, take a look into the order of elements"

# define u_int	u_int32_t
# define n_int	int32_t

class RPN_
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		RPN_();
		RPN_(bool log);
		RPN_(const RPN_ &RPN_);
		~RPN_();
		RPN_ & operator = (const RPN_ &RPN_);

		//PARSE
		//-------------------------------------------------------

		void	check_string(string s);

		//CALCULATE
		//-------------------------------------------------------

		void	calculate(string s);

		//-------------------------------------------------------

	protected:
		bool			_do_log;
		std::stack<int> stack;

	private:
		//LOG
		//-------------------------------------------------------

		void	constructor_log(string s);

		//CALCULATE
		//-------------------------------------------------------

		void	select_operation(char c);
		void	do_division(void);
		void	do_multiplication(void);
		void	do_substraction(void);
		void	do_addition(void);

		//PARSE
		//-------------------------------------------------------

		bool	check_allowed_chars(string s);
		bool	check_char_space_char_rule(string s);
		bool	check_string_validity(string s);

		//-------------------------------------------------------
};

#endif