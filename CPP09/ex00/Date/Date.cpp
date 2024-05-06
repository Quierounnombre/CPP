#include "Date.hpp"

#pragma region CONSTRUCTOR

/*
@param s log of the constructor
@brief abstraction of constructor log
*/
void	Date::constructor_log(string s)
{
	if (_do_log)
	{
		cout << DATE_CONSTRUCTOR_LOG_COLOR;
		cout << s;
		cout << DATE_RESET_COLOR << endl;
	}
}

/*
@param date_str string formated in "yyyy-mm-dd"
@brief convert a str to a Date class, allows negative years values
@throw this call setMethods which could throw an exception or if date_str is badly formated
*/
Date::Date(string date_str) :
_do_log(DATE_DEFAULT_DO_LOG)
{
	int		tmp;

	constructor_log(DATE_DEFAULT_CONSTRUCTOR_LOG);
	tmp = date_str.find(DATE_DELIMITER);
	if (tmp == 0)
	{
		tmp = date_str.find_first_not_of(DATE_DELIMITER);
		if (tmp > DATE_DELIMITER_MAX)
			throw std::invalid_argument(DATE_BAD_DATE_STR_FORMAT);
		date_str.erase(0, tmp);
		tmp = -atoi(date_str.c_str());
	}
	else
		tmp = atoi(date_str.c_str());
	setYear(tmp);

	tmp = date_str.find(DATE_DELIMITER);
	date_str.erase(0, tmp);
	tmp = date_str.find_first_not_of(DATE_DELIMITER);
	if (tmp > DATE_DELIMITER_MAX)
		throw std::invalid_argument(DATE_BAD_DATE_STR_FORMAT);
	date_str.erase(0, tmp);
	tmp = atoi(date_str.c_str());
	setMonth(tmp);

	tmp = date_str.find(DATE_DELIMITER);
	date_str.erase(0, tmp);
	tmp = date_str.find_first_not_of(DATE_DELIMITER);
	if (tmp > DATE_DELIMITER_MAX)
	throw std::invalid_argument(DATE_BAD_DATE_STR_FORMAT);
	date_str.erase(0, tmp);
	tmp = atoi(date_str.c_str());
	setDays(tmp);
}

/*
@param date_str string formated in "yyyy-mm-dd"
@param log overwrite the default log to show/silence constructors/destructors calls
@brief convert a str to a Date class, allows negative years values
@throw this call setMethods which could throw an exception or if date_str is badly formated
*/
Date::Date(string date_str, bool log) :
_do_log(log)
{
	int		tmp;

	constructor_log(DATE_DEFAULT_CONSTRUCTOR_LOG);
	tmp = date_str.find(DATE_DELIMITER);
	if (tmp == 0)
	{
		tmp = date_str.find_first_not_of(DATE_DELIMITER);
		if (tmp > DATE_DELIMITER_MAX)
			throw std::invalid_argument(DATE_BAD_DATE_STR_FORMAT);
		date_str.erase(0, tmp);
		tmp = -atoi(date_str.c_str());
	}
	else
		tmp = atoi(date_str.c_str());
	setYear(tmp);

	tmp = date_str.find(DATE_DELIMITER);
	date_str.erase(0, tmp);
	tmp = date_str.find_first_not_of(DATE_DELIMITER);
	if (tmp > DATE_DELIMITER_MAX)
		throw std::invalid_argument(DATE_BAD_DATE_STR_FORMAT);
	date_str.erase(0, tmp);
	tmp = atoi(date_str.c_str());
	setMonth(tmp);

	tmp = date_str.find(DATE_DELIMITER);
	date_str.erase(0, tmp);
	tmp = date_str.find_first_not_of(DATE_DELIMITER);
	if (tmp > DATE_DELIMITER_MAX)
	throw std::invalid_argument(DATE_BAD_DATE_STR_FORMAT);
	date_str.erase(0, tmp);
	tmp = atoi(date_str.c_str());
	setDays(tmp);
}

/*
@param day days of the date
@param month month of the date
@param year year of the date
@brief create a date with this values
@throw this call setMethods which could throw an exception
*/
Date::Date(int day, int month, int year) :
_do_log(DATE_DEFAULT_DO_LOG)
{
	setYear(year);
	setMonth(month);
	setDays(day);
	constructor_log(DATE_DEFAULT_CONSTRUCTOR_LOG);
}

/*
@param day days of the date
@param month month of the date
@param year year of the date
@param log overwrite the default log to show/silence constructors/destructors calls
@brief create a date with this values
@throw this call setMethods which could throw an exception
*/
Date::Date(int day, int month, int year, bool log) :
_do_log(log)
{
	setYear(year);
	setMonth(month);
	setDays(day);
	constructor_log(DATE_DEFAULT_CONSTRUCTOR_LOG);
}

/*
@brief destructor
*/
Date::~Date()
{
	constructor_log(DATE_DESTRUCTOR_LOG);
}

/*
@brief copy a date value into another
*/
Date::Date(const Date &Date) :
_do_log(Date._do_log),
_days(Date.getDays()),
_month(Date.getMonth()),
_year(Date.getYear())
{
	constructor_log(DATE_COPY_CONSTRUCTOR_LOG);
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

#pragma region OVERLOADS

std::ostream &operator<<(std::ostream &out, const Date &d)
{
	out << d.getDays() << DATE_DELIMITER;
	out << d.getMonth() << DATE_DELIMITER;
	if (d.getYear() >= 0)
	{
		out << d.getYear() << " ";
		out << "AC";
	}
	else
	{
		out << -d.getYear() << " ";
		out << "BC";
	}
	return (out);
}

Date & Date::operator= (const Date &Date)
{
	constructor_log(DATE_COPY_ASSIGNMENT_LOG);
	if (this != & Date)
	{
		this->_do_log = Date._do_log;
		this->_year = Date.getYear();
		this->_month = Date.getMonth();
		this->_days = Date.getDays();
	}
	return (*this);
}

#pragma endregion