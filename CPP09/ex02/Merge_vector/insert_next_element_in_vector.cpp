#include "../PmergeMe.hpp"

# define START_POS 0
# define NEXT_ELEMENT 1
# define MIN_SIZE 2

static std::vector<int>	create_sub_vector
(
	int				lower_bond,
	int				upper_bond,
	std::vector<int>	&vector
)
{
	int							i;
	std::vector<int>::iterator	it;
	std::vector<int>				tmp_vector;

	i = 0;
	it = vector.begin();
	while (i != lower_bond && it != vector.end())
	{
		i++;
		it++;
	}
	while (i != upper_bond && it != vector.end())
	{
		tmp_vector.push_back(*it);
		it++;	
		i++;
	}
	return (tmp_vector);
}

static int	get_position_in_vector
(
	std::vector<int>	&vector,
	int				target
)
{
	int		i;

	i = 0;
	for
	(
		std::vector<int>::iterator	it = vector.begin();
		it != vector.end();
		it++
	)
	{
		i++;
		if (*it == target)
			return (i);
	}
	return (i);
}

static std::vector<int>::iterator	get_middle_pos_value
(
	std::vector<int>	&vector
)
{
	int							half_size;
	std::vector<int>::iterator	it;

	half_size = vector.size() / 2;
	it = vector.begin();
	while (half_size && it != vector.end())
	{
		half_size--;
		it++;
	}
	return (it);
}

static void	insert_element
(
	std::vector<int>				&bigger_vector,
	int							element,
	std::vector<int>::iterator	target_it
)
{
	for
	(
		std::vector<int>::iterator	it = bigger_vector.begin();
		it != bigger_vector.end();
		it++
	)
	{
		if (*it == *target_it)
		{
			bigger_vector.insert(it, element);
			break ;
		}
	}
}

static bool	check_pair_condition
(
	std::vector<int>				&tmp_vector,
	std::vector<int>::iterator	tmp_it,
	int							target_value
)
{
	if 
	(
		tmp_vector.size() == MIN_SIZE
		&& *tmp_it > target_value
		&& tmp_vector.front() > target_value
	)
		return (true);
	return (false);

}

void	PmergeMe::insert_next_element_in_vector
(
	std::vector<std::vector<int> >	&splited_vector,
	std::vector<int>				&bigger_vector
)
{
	std::vector<int>::iterator	tmp_it;
	std::vector<int>				tmp_vector;
	int							target_value;
	int							pair_value;

	pair_value = splited_vector.front().front();
	target_value = splited_vector.front().back();
	tmp_vector = create_sub_vector(
		START_POS,
		get_position_in_vector(bigger_vector, pair_value),
		bigger_vector
	);
	tmp_it = get_middle_pos_value(tmp_vector);
	while (tmp_vector.size() > MIN_SIZE)
	{
		if (target_value > *tmp_it)
			tmp_vector = create_sub_vector
			(
				get_position_in_vector(tmp_vector, *tmp_it),
				get_position_in_vector(tmp_vector, pair_value),
				tmp_vector
			);
		else
			tmp_vector = create_sub_vector
			(
				START_POS,
				get_position_in_vector(tmp_vector, *tmp_it),
				tmp_vector
			);
		tmp_it = get_middle_pos_value(tmp_vector);
	}
	if (check_pair_condition(tmp_vector, tmp_it, target_value))
		tmp_it--;
	insert_element(bigger_vector, splited_vector.front().back(), tmp_it);
	splited_vector.erase(splited_vector.begin(), splited_vector.begin() + NEXT_ELEMENT);
}
