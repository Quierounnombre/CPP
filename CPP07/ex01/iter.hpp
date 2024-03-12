#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

# define u_int	u_int32_t

template <typename T>
void	iter(T *arr, u_int len, void(*f)(T &pos))
{
	u_int	i;

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