#include "../PmergeMe.hpp"

# define START_POS 0
# define MIN_SIZE 2

static std::list<int>	create_sub_lst
(
	int				lower_bond,
	int				upper_bond,
	std::list<int>	&lst
)
{
	int							i;
	std::list<int>::iterator	it;
	std::list<int>				tmp_lst;

	i = 0;
	it = lst.begin();
	while (i != lower_bond && it != lst.end())
	{
		i++;
		it++;
	}
	while (i != upper_bond && it != lst.end())
	{
		tmp_lst.push_back(*it);
		it++;	
		i++;
	}
	return (tmp_lst);
}

static int	get_position_in_lst
(
	std::list<int>	&lst,
	int				target
)
{
	int		i;

	i = 0;
	for
	(
		std::list<int>::iterator	it = lst.begin();
		it != lst.end();
		it++
	)
	{
		i++;
		if (*it == target)
			return (i);
	}
	return (i);
}

static std::list<int>::iterator	get_middle_pos_value
(
	std::list<int>	&lst
)
{
	int							half_size;
	std::list<int>::iterator	it;

	half_size = lst.size() / 2;
	it = lst.begin();
	while (half_size && it != lst.end())
	{
		half_size--;
		it++;
	}
	return (it);
}

static void	insert_element
(
	std::list<int>				&bigger_lst,
	int							element,
	std::list<int>::iterator	target_it
)
{
	for
	(
		std::list<int>::iterator	it = bigger_lst.begin();
		it != bigger_lst.end();
		it++
	)
	{
		if (*it == *target_it)
		{
			bigger_lst.insert(it, element);
			break ;
		}
	}
}

static bool	check_pair_condition
(
	std::list<int>				&tmp_lst,
	std::list<int>::iterator	tmp_it,
	int							target_value
)
{
	if 
	(
		tmp_lst.size() == MIN_SIZE
		&& *tmp_it > target_value
		&& tmp_lst.front() > target_value
	)
		return (true);
	return (false);

}

void	PmergeMe::insert_next_element_in_lst
(
	std::list<std::list<int> >	&splited_lst,
	std::list<int>				&bigger_lst
)
{
	std::list<int>::iterator	tmp_it;
	std::list<int>				tmp_lst;
	int							target_value;
	int							pair_value;

	pair_value = splited_lst.front().front();
	target_value = splited_lst.front().back();
	tmp_lst = create_sub_lst(
		START_POS,
		get_position_in_lst(bigger_lst, pair_value),
		bigger_lst
	);
	tmp_it = get_middle_pos_value(tmp_lst);
	while (tmp_lst.size() > MIN_SIZE)
	{
		if (target_value > *tmp_it)
			tmp_lst = create_sub_lst
			(
				get_position_in_lst(tmp_lst, *tmp_it),
				get_position_in_lst(tmp_lst, pair_value),
				tmp_lst
			);
		else
			tmp_lst = create_sub_lst
			(
				START_POS,
				get_position_in_lst(tmp_lst, *tmp_it),
				tmp_lst
			);
		tmp_it = get_middle_pos_value(tmp_lst);
	}
	if (check_pair_condition(tmp_lst, tmp_it, target_value))
		tmp_it--;
	insert_element(bigger_lst, splited_lst.front().back(), tmp_it);
	splited_lst.pop_front();
}
