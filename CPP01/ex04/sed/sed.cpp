#include "Sed.hpp"

Sed::Sed(bool testing, std::string s1, std::string s2, std::string file) :
_is_testing(testing),
_s1(s1),
_s2(s2)
{
	std::string	s;

	if (!testing)
	{
		if (open_files(file))
		{
			s = get_file_content();
			replace_file_content(s);
			this->_copy << s;
			close_files();
		}
	}
}

Sed::~Sed()
{

}

Sed::Sed(const Sed &Sed) :
_is_testing(Sed._is_testing),
_s1(Sed._s1),
_s2(Sed._s2)
{

}

Sed & Sed::operator= (const Sed &Sed)
{
	if (this != & Sed)
	{
	}
	return (*this);
}