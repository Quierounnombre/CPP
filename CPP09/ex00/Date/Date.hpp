#ifndef DATE_HPP
# define DATE_HPP

# pragma once

# include <iostream>
# include <cstdlib>
# include <string>

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define DATE_CONSTRUCTOR_LOG_COLOR "\033[1;30m"
# define DATE_RESET_COLOR "\033[0m"
# define DATE_DEFAULT_DO_LOG false

# define DATE_DEFAULT_CONSTRUCTOR_LOG "Date default constructor called"
# define DATE_COPY_CONSTRUCTOR_LOG "Date copy constructor called"
# define DATE_COPY_ASSIGNMENT_LOG "Date copy assignment called"
# define DATE_DESTRUCTOR_LOG "Date destructor called"

# define DATE_OUT_OF_RANGE_30 "have 30 days, no more, no less"
# define DATE_OUT_OF_RANGE_31 "have 31 days, no more, no less"
# define DATE_OUT_OF_RANGE_FEB "have 28 days, no more, no less"
# define DATE_OUT_OF_RANGE_LEAP "have 29 days, no more, no less"
# define DATE_OUT_OF_RANGE_YEAR	"A gregorian calendar have 12 months, no more, no less"
# define DATE_BAD_DATE_STR_FORMAT "Date string is in a incorrect format"

# define DATE_DELIMITER "-"
# define DATE_DELIMITER_MAX 1

//Gregorian calendar defines

# define GC_MIN_DAYS_PER_MONTH 1
# define GC_DAYS_PER_31_MONTH 31
# define GC_DAYS_PER_30_MONTH 30
# define GC_FEBRUARY_NORMAL_DAYS 28
# define GC_FEBRUARY_LEAP_DAYS 29
# define GC_MIN_MONTH_PER_YEAR 1
# define GC_MAX_MONTH_PER_YEAR 12

typedef enum e_list_of_months
{
	January = 1,
	February = 2,
	March = 3,
	April = 4,
	May = 5,
	June = 6,
	July = 7,
	August = 8,
	September = 9,
	October = 10,
	November = 11,
	December = 12
}	t_list_of_months;

class Date
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		Date(string date_str);
		Date(string date_str, bool log);
		Date(int day, int month, int year);
		Date(int day, int month, int year, bool log);
		Date(const Date &Date);
		~Date();
		Date & operator = (const Date &Date);

		//Setters
		//-------------------------------------------------------

		void	setDays(int day);
		void	setMonth(int month);
		void	setYear(int year);

		//Getters
		//-------------------------------------------------------

		int			getDays(void) const;
		int			getMonth(void) const;
		int			getYear(void) const;
		static string	getMonthName(int _month);

		//Is funs
		//-------------------------------------------------------

		static bool	is_31_month(int month);
		static bool	is_30_month(int month);

		//-------------------------------------------------------

	protected:
		bool	_do_log;
		int		_days;
		int		_month;
		int		_year;

	private:
		//LOG
		//-------------------------------------------------------

		void	constructor_log(string s);
};

std::ostream &operator<<(std::ostream &out, const Date &f);

#endif