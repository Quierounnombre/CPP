#include "Dog.hpp"

#pragma region CONSTRUCTOR

void	Dog::constructor_log(string s)
{
	if (_do_log)
	{
		cout << DOG_CONSTRUCTOR_LOG_COLOR;
		cout << s;
		cout << DOG_RESET_COLOR << endl;
	}
}

Dog::Dog() :
_do_log(DOG_DEFAULT_DO_LOG)
{
	constructor_log("Dog default constructor called");
	type = "Dog";
}

Dog::Dog(bool log) :
_do_log(log)
{
	constructor_log("Dog default constructor called");
	type = "Dog";
}

Dog::~Dog()
{
	constructor_log("Dog destructor called");
}

Dog::Dog(const Dog &Dog) :
_do_log(Dog._do_log)
{
	constructor_log("Dog copy constructor called");
	type = Dog.type;
}

Dog & Dog::operator= (const Dog &Dog)
{
	constructor_log("Dog copy assignment called");
	if (this != & Dog)
	{
	}
	this->_do_log = Dog._do_log;
	this->type = Dog.type;
	return (*this);
}

#pragma endregion

#pragma region SOUNDS

void	Dog::makeSound(void)
{
	cout << "Woofffff Wooofffff" << endl;
}

#pragma endregion
