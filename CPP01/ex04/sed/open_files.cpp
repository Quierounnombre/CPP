#include "sed.hpp"

bool	sed::open_files(std::string file)
{
	int		i;

	i = file.size();
	file.append(this->_extention);
	this->_file.open(file, std::ios::in);
	if (!this->_file.is_open())
		return (false);
	file.erase(i, std::string::npos);
	file.append(".replace");
	this->_copy.open(file, std::ios::out);
	if (!this->_copy.is_open())
		return (false);
	return (true);
}