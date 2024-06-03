#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# pragma once

# include <iostream>
# include <string>
# include <vector>
# include <list>

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define PMERGEME_CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define PMERGEME_RESET_COLOR "\033[0m"
# define PMERGEME_DEFAULT_DO_LOG false

# define PMERGEME_DEFAULT_CONSTRUCTOR_LOG "PmergeMe default constructor called"
# define PMERGEME_COPY_CONSTRUCTOR_LOG "PmergeMe copy constructor called"
# define PMERGEME_COPY_ASSIGNMENT_LOG "PmergeMe copy assignment called"
# define PMERGEME_DESTRUCTOR_LOG "PmergeMe destructor called"

class PmergeMe
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		PmergeMe();
		PmergeMe(bool log);
		PmergeMe(const PmergeMe &PmergeMe);
		~PmergeMe();
		PmergeMe & operator = (const PmergeMe &PmergeMe);

		//MERGE
		//-------------------------------------------------------

		void	MergeLst(std::list<int> &list);
		void	MergeVector(std::vector<int> &vector);

		//IS_FUNS
		//-------------------------------------------------------

		static bool	is_lst_sorted(std::list<int> &lst);

		//-------------------------------------------------------

	protected:
		bool	_do_log;

		//MERGE_LST
		//-------------------------------------------------------

		std::list<std::list<int> >	split_lst_in_half(std::list<int> &lst);
		void						order_lst_pairs(std::list<std::list<int> > &lst);
		std::list<int>				create_bigger_elements_lst(std::list<std::list<int> > &lst);
		void						insert_smallest_lst(std::list<std::list<int> > &lst,
														std::list<int> &bigger_lst);
		void						insert_next_element_in_lst(std::list<std::list<int> > &splited_lst,
																std::list<int> &big_lst);

		//MERGE_VECTOR
		//-------------------------------------------------------

		std::vector<std::vector<int> >	split_vector_in_half(std::vector<int> &vector);

		//-------------------------------------------------------
	private:
		//LOG
		//-------------------------------------------------------

		void	constructor_log(string s);
		void	put_lst_in_cout(std::list<int> lst);

};

#endif
