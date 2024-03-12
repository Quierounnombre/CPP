#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# pragma once

# include <iostream>
# include <string>

using std::cout;
using std::string;
using std::cin;
using std::endl;
using std::cerr;

# define u_int	u_int32_t
# define n_int	int32_t

typedef struct	s_Data
{
	string		name;
	n_int		balance;
	n_int		hash;
}	Data;

class Serializer
{
	public:
		//SERIALIZE

		static uintptr_t	serialize(Data *ptr);
		static Data		*deserialize(uintptr_t raw);

		//-------------------------------------------------------
};

#endif