# include "../BitcoinExchange.hpp"

static void	remove_first_line(std::fstream &_database_file, int &line)
{
	string	tmp_s;

	getline(_database_file, tmp_s);
	line++;
}

void	BitcoinExchange::loaddatabase(void)
{
	int		line;
	string	tmp_s;

	line = 0;
	_database_file.open(_database_dir.c_str(), std::ios::in);
	if (!_database_file.is_open())
		throw std::logic_error(ERROR_CANT_OPEN_DATABASE);
	remove_first_line(_database_file, line);
	while (!_database_file.eof())
	{
		getline(_database_file, tmp_s);
		line++;
		try
		{
			store_line_in_dicc(tmp_s, line);
		}
		catch(const std::exception& e)
		{
			cerr << e.what() << endl;
		}
	}
}
