#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# pragma once

# include <iostream>
# include <string>
# include <stack>

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define MUTANTSTACK_CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define MUTANTSTACK_RESET_COLOR "\033[0m"
# define MUTANTSTACK_DEFAULT_DO_LOG false

# define MUTANTSTACK_DEFAULT_CONSTRUCTOR_LOG "MutantStack default constructor called"
# define MUTANTSTACK_COPY_CONSTRUCTOR_LOG "MutantStack copy constructor called"
# define MUTANTSTACK_COPY_ASSIGNMENT_LOG "MutantStack copy assignment called"
# define MUTANTSTACK_DESTRUCTOR_LOG "MutantStack destructor called"

# define u_int	u_int32_t
# define n_int	int32_t


template <typename T>
class MutantStack : virtual public std::stack<T>
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		MutantStack();
		MutantStack(bool log);
		MutantStack(const MutantStack &MutantStack);
		~MutantStack();
		MutantStack & operator = (const MutantStack &MT);

		//-------------------------------------------------------

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		using std::stack<T>::c;

		iterator begin(void) { return (c.begin()); }
		iterator end(void) { return (c.end()); }
		const_iterator begin(void) const { return (c.begin()); }
		const_iterator end(void) const { return (c.end()); }
		reverse_iterator rbegin(void) { return (c.rbegin()); }
		reverse_iterator rend(void) { return (c.rend()); }
		const_reverse_iterator rbegin(void) const { return (c.rbegin()); }
		const_reverse_iterator rend(void) const { return (c.rend()); }

	protected:
		bool	_do_log;

	private:
		//LOG
		//-------------------------------------------------------

		void	constructor_log(string s);
};

# include "MutantStack.tpp"

#endif