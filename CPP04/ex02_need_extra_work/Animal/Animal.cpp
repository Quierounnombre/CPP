#include "Animal.hpp"

#pragma region CONSTRUCTOR

void	Animal::constructor_log(string s)
{
	if (_do_log)
	{
		cout << ANIMAL_CONSTRUCTOR_LOG_COLOR;
		cout << s;
		cout << ANIMAL_RESET_COLOR << endl;
	}
}

Animal::Animal() :
_do_log(ANIMAL_DEFAULT_DO_LOG)
{
	constructor_log("Animal default constructor called");
	type = "";
}

Animal::Animal(bool log) :
_do_log(log)
{
	constructor_log("Animal default constructor called");
	type = "";
}

Animal::~Animal()
{
	constructor_log("Animal destructor called");
}

Animal::Animal(const Animal &Animal) :
_do_log(Animal._do_log)
{
	constructor_log("Animal copy constructor called");
	type = Animal.type;
}

Animal & Animal::operator= (const Animal &Animal)
{
	constructor_log("Animal copy assignment called");
	if (this != & Animal)
	{
	}
	this->_do_log = Animal._do_log;
	this->type = Animal.type;
	return (*this);
}

#pragma endregion

#pragma region SOUNDS

void	Animal::makeSound(void) const
{
	cout << "Random animal noise" << endl;
}

#pragma endregion

#pragma region GETTERS

string	Animal::getType(void) const
{
	return (type);
}

#pragma endregion

#pragma region SETTERS

void	Animal::setType(string new_type)
{
	type = new_type;
}

#pragma endregion