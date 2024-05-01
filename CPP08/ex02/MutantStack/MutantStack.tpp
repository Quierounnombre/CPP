#include "MutantStack.hpp"

#pragma region CONSTRUCTOR

template <typename T>
void	MutantStack<T>::constructor_log(string s)
{
	if (_do_log)
	{
		cout << MUTANTSTACK_CONSTRUCTOR_LOG_COLOR;
		cout << s;
		cout << MUTANTSTACK_RESET_COLOR << endl;
	}
}

template <typename T>
MutantStack<T>::MutantStack() :
_do_log(MUTANTSTACK_DEFAULT_DO_LOG)
{
	constructor_log(MUTANTSTACK_DEFAULT_CONSTRUCTOR_LOG);
}

template <typename T>
MutantStack<T>::MutantStack(bool log) :
_do_log(log)
{
	constructor_log(MUTANTSTACK_DEFAULT_CONSTRUCTOR_LOG);
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	constructor_log(MUTANTSTACK_DESTRUCTOR_LOG);
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &MutantStack) :
_do_log(MutantStack._do_log)
{
	constructor_log(MUTANTSTACK_COPY_CONSTRUCTOR_LOG);
}

template <typename T>
MutantStack<T> & MutantStack<T>::operator= (const MutantStack &MutantStack)
{
	constructor_log(MUTANTSTACK_COPY_ASSIGNMENT_LOG);
	if (this != & MutantStack)
	{
	}
	this->_do_log = MutantStack._do_log;
	return (*this);
}

#pragma endregion
