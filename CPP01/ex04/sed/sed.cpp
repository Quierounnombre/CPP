#include "Sed.hpp"

Sed::Sed(bool testing) :
_is_testing(testing)
{

}

Sed::~Sed()
{

}

Sed::Sed(const Sed &Sed) :
_is_testing(Sed._is_testing)
{

}

Sed & Sed::operator= (const Sed &Sed)
{
	if (this != & Sed)
	{
	}
	return (*this);
}