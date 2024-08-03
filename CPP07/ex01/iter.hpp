#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>


template <typename T>
void	iter(T *arr, unsigned int len, void(*f)(T &pos))
{
	unsigned int	i;

	i = 0;
	while (i < len)
	{
		f(arr[i]);
		i++;
	}
}

template <typename T>
void	increment_T(T &pos)
{
	pos++;
}

#endif