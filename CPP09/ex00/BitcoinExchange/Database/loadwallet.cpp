# include "../BitcoinExchange.hpp"

static void	remove_first_line(std::fstream &_wallet_file, int &line)
{
	string	tmp_s;

	getline(_wallet_file, tmp_s);
	line++;
}

void	BitcoinExchange::loadwallet(void)
{
	int		line;
	string	tmp_s;

	if (_wallet_dir == BITCOINEXCHANGE_DEFAULT_WALLET)
		throw std::logic_error(ERROR_WRONG_INPUT_FILE);
	line = 0;
	_wallet_file.open(_wallet_dir.c_str(), std::ios::in);
	if (!_wallet_file.is_open())
		throw std::logic_error(ERROR_CANT_OPEN_INPUT_FILE);
	remove_first_line(_wallet_file, line);
	while (!_wallet_file.eof())
	{
		getline(_wallet_file, tmp_s);
		line++;
		try
		{
			store_line_in_wallet(tmp_s, line);
			cout << wallet.begin()->first.getDateString() << " => " 
			<< wallet.begin()->second << " = " 
			<< this->GetValueCloserToDate(wallet.begin()->first) * wallet.begin()->second 
			<< endl;
			wallet.clear();
		}
		catch(const std::exception& e)
		{
			cerr << e.what() << endl;
		}
	}
	_wallet_file.close();
}
