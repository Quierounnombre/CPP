#include "Brain.hpp"

#pragma region CONSTRUCTOR

void	Brain::constructor_log(string s)
{
	if (_do_log)
	{
		cout << BRAIN_CONSTRUCTOR_LOG_COLOR;
		cout << s;
		cout << BRAIN_RESET_COLOR << endl;
	}
}

Brain::Brain() :
_do_log(BRAIN_DEFAULT_DO_LOG)
{
	constructor_log(BRAIN_DEFAULT_CONSTRUCTOR_LOG);
}

Brain::Brain(bool log) :
_do_log(log)
{
	constructor_log(BRAIN_DEFAULT_CONSTRUCTOR_LOG);
}

Brain::~Brain()
{
	constructor_log(BRAIN_DESTRUCTOR_LOG);
}

Brain::Brain(const Brain &Brain) :
_do_log(Brain._do_log)
{
	constructor_log(BRAIN_COPY_CONSTRUCTOR_LOG);
}

Brain & Brain::operator= (const Brain &Brain)
{
	constructor_log(BRAIN_COPY_ASSIGNMENT_LOG);
	if (this != & Brain)
	{
		this->_do_log = Brain._do_log;
		for (int i = 0; i < BRAIN_SIZE; i++)
		{
			ideas[i] = Brain.getIdea(i);
		}
	}
	return (*this);
}

#pragma endregion

#pragma region GETTERS

string	Brain::getIdea(int i) const
{
	if (i >= 0 && i < BRAIN_SIZE)
		return (ideas[i]);
	return (BRAIN_IDEA_NOT_FOUND);
}

#pragma endregion