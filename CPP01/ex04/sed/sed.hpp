#ifndef SED_HPP
# define SED_HPP

# pragma once

# include <iostream>
# include <string>
# include <fstream>

class sed
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		sed();
		sed(const sed &sed);
		~sed();
		sed & operator = (const sed &sed);

		//FILES_FUNS
		//-------------------------------------------------------

		bool	open_files(std::string file);

		//PARSE_FUNS
		//-------------------------------------------------------

		void	parse_file_name(std::string s);

	private:
		std::ofstream	_file;
		std::ofstream	_copy;
		std::string		_s1;
		std::string		_s2;
		std::string		_extention;

	private:

};

#endif