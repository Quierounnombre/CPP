#ifndef SED_HPP
# define SED_HPP

# pragma once

# include <iostream>
# include <string>
# include <fstream>

# define ERROR_FILE_NOT_EXIST "The file can't be open, maybe dont exist"
# define ERROR_CANT_CREATE_FILE "The file cant be created/open"

class Sed
{
	public:
		//CONSTRUCTORS
		//-------------------------------------------------------

		Sed(bool testing, std::string s1, std::string s2);
		Sed(const Sed &Sed);
		~Sed();
		Sed & operator = (const Sed &Sed);

		//FILES_FUNS
		//-------------------------------------------------------

		bool	open_files(std::string file);
		void	close_files(void);

		//STR_FUNS
		//-------------------------------------------------------

		std::string	get_file_content();
		void		replace_file_content(std::string &s);

	private:
		std::fstream	_file;
		std::fstream	_copy;
		std::string		_s1;
		std::string		_s2;
		bool			_is_testing;

	private:

};

#endif