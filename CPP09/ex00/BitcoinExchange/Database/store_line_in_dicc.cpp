# include "../BitcoinExchange.hpp"

void	BitcoinExchange::store_line_in_dicc(string s, int line)
{
	char	*str;
	char	*date_str;
	char	*value_str;
	Date	date("10-1-1");
	float	value;

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
	value = atof(value_str);
	this->dicc[date] = value;
}
