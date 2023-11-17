#include "Sed.hpp"

void	Sed::close_files(void)
{
	this->_file.close();
	this->_copy.close();
}