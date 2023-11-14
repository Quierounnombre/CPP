#include "Sed.hpp"

bool	Sed::open_files(std::string file)
{
	int		end_of_file_name;

	end_of_file_name = file.size();

	file.append(this->_extention);
	this->_file.open(file, std::ios::in);
	if (!this->_file.is_open())
		return (false);

	file.erase(end_of_file_name, std::string::npos);
	file.append(".replace");

	this->_copy.open(file, std::ios::out);
	if (!this->_copy.is_open())
		return (false);
	return (true);
}