# include "../BitcoinExchange.hpp"

static double float_conversion(char *str, int line)
{
	bool	dot_flag;
	double	r;

	r = atof(str);
	dot_flag = false;
	while (*str)
	{
		if (!isdigit(*str) && *str != '.')
			throw std::out_of_range (ERROR_BADLY_FORMATED_LINE + to_string(line));
		if (*str == '.' && dot_flag)
			throw std::out_of_range (ERROR_BADLY_FORMATED_LINE + to_string(line));
		else if (*str == '.')
			dot_flag = true;
		str++;
	}
	if (r < BITCOIN_DATABASE_MIN_VALUE || r > BITCOIN_DATABASE_MAX_VALUE)
		throw std::out_of_range (ERROR_OUT_OF_RANGE + to_string(line));
	return (r);
}

void	BitcoinExchange::store_line_in_dicc(string s, int line)
{
	char	*str;
	char	*date_str;
	char	*value_str;
	Date	date("10-1-1");
	double	value;

	date_str = NULL;
	value_str = NULL;
	str = strtok((char *)s.c_str(), BITCOIN_DATABASE_TOKEN);
	while (str)
	{
		if (!date_str)
			date_str = str;
		else if (!value_str)
			value_str = str;
		else if (str)
			throw std::out_of_range	(ERROR_BADLY_FORMATED_LINE + to_string(line));
		str = strtok(NULL, BITCOIN_DATABASE_TOKEN);
	}
	date = Date(date_str);
	value = float_conversion(value_str, line);
	this->dicc[date] = value;
}
