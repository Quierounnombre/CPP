#include "Sed.hpp"

Sed::Sed(bool testing, std::string s1, std::string s2) :
_is_testing(testing),
_s1(s1),
_s2(s2)
{

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