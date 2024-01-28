#include "Cat.hpp"

#pragma region CONSTRUCTOR

void	Cat::constructor_log(string s)
{
	if (_do_log)
	{
		cout << CAT_CONSTRUCTOR_LOG_COLOR;
		cout << s;
		cout << CAT_RESET_COLOR << endl;
	}
}

Cat::Cat() :
_do_log(CAT_DEFAULT_DO_LOG)
{
	constructor_log("Cat default constructor called");
	type = "Cat";
}

Cat::Cat(bool log) :
_do_log(log)
{
	constructor_log("Cat default constructor called");
	type = "Cat";
}

Cat::~Cat()
{
	constructor_log("Cat destructor called");
}

Cat::Cat(const Cat &Cat) :
_do_log(Cat._do_log)
{
	constructor_log("Cat copy constructor called");
	type = Cat.type;
}

Cat & Cat::operator= (const Cat &Cat)
{
	constructor_log("Cat copy assignment called");
	if (this != & Cat)
	{
	}
	this->_do_log = Cat._do_log;
	this->type = Cat.type;
	return (*this);
}

#pragma endregion

#pragma region SOUNDS

void	Cat::makeSound(void) const
{
	cout << "Meaaaooww" << endl;
}

#pragma endregion