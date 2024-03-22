#include "Array.hpp"

#pragma region CONSTRUCTOR

template <typename T>
void	Array<T>::constructor_log(std::string s)
{
	if (_do_log)
	{
		cout << ARRAY_CONSTRUCTOR_LOG_COLOR;
		cout << s;
		cout << ARRAY_RESET_COLOR << endl;
	}
}

template <typename T>
Array<T>::Array() :
_do_log(ARRAY_DEFAULT_DO_LOG)
{
	_size = 0;
	_arr = new T[_size];
	constructor_log(ARRAY_DEFAULT_CONSTRUCTOR_LOG);
}

template <typename T>
Array<T>::Array(u_int n) :
_do_log(ARRAY_DEFAULT_DO_LOG)
{
	_size = n;
	_arr = new T[_size];
	constructor_log(ARRAY_DEFAULT_CONSTRUCTOR_LOG);
}

template <typename T>
Array<T>::~Array()
{
	delete[] _arr;
	constructor_log(ARRAY_DESTRUCTOR_LOG);
}

template <typename T>
Array<T>::Array(const Array &Array) :
_do_log(Array._do_log)
{
	_size = Array._size;
	_arr = new T[_size];
	for (u_int i = 0; i < _size; i++)
		_arr[i] = Array._arr[i];
	constructor_log(ARRAY_COPY_CONSTRUCTOR_LOG);
}

template <typename T>
Array<T> & Array<T>::operator= (const Array &Array)
{
	cout << "here!" << endl;
	constructor_log(ARRAY_COPY_ASSIGNMENT_LOG);
	if (this != &Array)
	{
		cout << "here!" << endl;
		if (_arr != NULL)
			delete[] _arr;
		_size = Array._size;
		_arr = new T[_size];
		for (u_int i = 0; i < _size; i++)
			_arr[i] = Array._arr[i];
		this->_do_log = Array._do_log;
	}
	return (*this);
}

#pragma endregion

#pragma region OVERLOADS

template <typename T>
T &Array<T>::operator[](unsigned i)
{
	if (i >= 0 && i <= _size)
		return _arr[i];
	throw std::out_of_range("OUT OF RANGE");
}

#pragma endregion

#pragma region SIZE

template <typename T>
u_int	Array<T>::size(void)
{
	return (_size);
}

#pragma endregion