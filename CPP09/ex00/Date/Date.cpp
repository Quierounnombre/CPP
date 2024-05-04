#include "Date.hpp"

#pragma region CONSTRUCTOR

void	Date::constructor_log(string s)
{
	if (_do_log)
	{
		cout << DATE_CONSTRUCTOR_LOG_COLOR;
		cout << s;
		cout << DATE_RESET_COLOR << endl;
	}
}

Date::Date() :
_do_log(DATE_DEFAULT_DO_LOG)
{
	constructor_log(DATE_DEFAULT_CONSTRUCTOR_LOG);
}

Date::Date(bool log) :
_do_log(log)
{
	constructor_log(DATE_DEFAULT_CONSTRUCTOR_LOG);
}

Date::~Date()
{
	constructor_log(DATE_DESTRUCTOR_LOG);
}

Date::Date(const Date &Date) :
_do_log(Date._do_log)
{
	constructor_log(DATE_COPY_CONSTRUCTOR_LOG);
}

Date & Date::operator= (const Date &Date)
{
	constructor_log(DATE_COPY_ASSIGNMENT_LOG);
	if (this != & Date)
	{
	}
	this->_do_log = Date._do_log;
	return (*this);
}

#pragma endregion

#pragma region SETTERS

/*
@param days day of the month to be set.
@brief Set the day of the date to a certain value, be aware is dependant of the month and year, so take into acount leap years and
30/31 months.
@throw throws a std::out_of_range exception in case of bad input.
*/
void	Date::setDays(int days)
{
	if (is_31_month(_month))
	{
		if (days >= GC_MIN_DAYS_PER_MONTH && days <= GC_DAYS_PER_31_MONTH)
			_days = days;
		else
			throw std::out_of_range(getMonthName(_month) + " " + DATE_OUT_OF_RANGE_30);
	}
	else if (is_30_month(_month))
	{
		if (days >= GC_MIN_DAYS_PER_MONTH && days <= GC_DAYS_PER_30_MONTH)
			_days = days;
		else
			throw std::out_of_range(getMonthName(_month) + " " + DATE_OUT_OF_RANGE_31);
	}
	else if (_month == February)
	{
		if ((_year % 4) == 0)
		{
			if (days >= GC_MIN_DAYS_PER_MONTH && days <= GC_FEBRUARY_LEAP_DAYS)
				_days = days;
			else
				throw std::out_of_range(getMonthName(_month) + " " + DATE_OUT_OF_RANGE_LEAP);
		}
		else
		{
			if (days >= GC_MIN_DAYS_PER_MONTH && days <= GC_FEBRUARY_NORMAL_DAYS)
				_days = days;
			else
				throw std::out_of_range(getMonthName(_month) + " " + DATE_OUT_OF_RANGE_FEB);
		}
	}
}

/*
@param month month of the year to be set.
@brief Set the month of the year to a certain value, between 1 and 12
@throw throws a std::out_of_range exception in case of bad input.
*/
void	Date::setMonth(int month)
{
	if (month >= GC_MIN_MONTH_PER_YEAR && month <= GC_MAX_MONTH_PER_YEAR)
		_month = month;
	else
		throw std::out_of_range(DATE_OUT_OF_RANGE_YEAR);
}

/*
@param year sets the year
@brief this take into acount BC and AC so if you put -10 it will be understood as 10 BC.
*/
void	Date::setYear(int year)
{
	_year = year;
}

#pragma endregion

#pragma region GETTERS

/*
@param month month numeric value.
@brief Return the name of the month with the asociated value.
@return the name of the month.
*/
string Date::getMonthName(int month)
{
	string	name[12] =
	{
		"January",
		"February",
		"March",
		"April",
		"May",
		"June",
		"July",
		"August",
		"September",
		"October",
		"November",
		"December"
	};

	return (name[month - 1]);
}

/*
@brief Return the day of the month.
@return the day of the month.
*/
int Date::getDays(void) const
{
	return (_days);
}

/*
@brief Return the month of the year.
@return the month of the year.
*/
int Date::getMonth(void) const
{
	return (_month);
}

/*
@brief Return the year.
@return the year.
*/
int Date::getYear(void) const
{
	return (_year);
}

#pragma endregion

#pragma region IS_FUNS

/*
@param month month to be evaluated
@brief returns a value if the month is a 31 days month
@return true is the month is between those of 31 days, false otherwise
*/
bool	Date::is_31_month(int month)
{
	if ((month == January)
		|| (month == March)
		|| (month == May)
		|| (month == July)
		|| (month == August)
		|| (month == October)
		|| (month == December))
	{
		return (true);
	}
	return (false);
}

/*
@param month month to be evaluated
@brief returns a value if the month is a 30 days month
@return true is the month is between those of 30 days, false otherwise
*/
bool	Date::is_30_month(int month)
{
	if ((month == April)
		|| (month == June)
		|| (month == September)
		|| (month == November))
	{
		return (true);
	}
	return (false);
}

#pragma endregion