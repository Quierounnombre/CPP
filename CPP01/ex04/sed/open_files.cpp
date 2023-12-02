#include "Sed.hpp"

bool	Sed::open_files(std::string file)
{
	int		pos_of_dot;

	this->_file.open(file, std::ios::in);
	if (!this->_file.is_open())
	{
		std::cout << ERROR_FILE_NOT_EXIST << std::endl;
		return (false);
	}

	pos_of_dot = file.find('.', 0);
	if (pos_of_dot > 0)
		file.erase(pos_of_dot, std::string::npos);
	file.append(".replace");

	this->_copy.open(file, std::ios::out);
	if (!this->_copy.is_open())
	{
		std::cout << ERROR_CANT_CREATE_FILE << std::endl;
		this->_file.close();
		return (false);
	}
	return (true);
}