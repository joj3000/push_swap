/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_big_find4.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:27:20 by jerbs             #+#    #+#             */
/*   Updated: 2020/03/09 15:27:26 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_find_smallest_bigger(int to_put, int *pile1, t_index *index)
{
	int		i;
	int		max;

	max = 1000;
	i = index->i;
	while (i < index->argc)
	{
		if (pile1[i] < max && pile1[i] > to_put)
			max = pile1[i];
		i++;
	}
	return (max);
}

int		ft_find_bigger(int to_put, int *pile1, t_index *index)
{
	int		i;
	int		max;

	i = index->i;
	max = 0;
	while (i < index->argc)
	{
		if (pile1[i] > max && pile1[i] < to_put)
			max = pile1[i];
		i++;
	}
	return (max);
}

int		ft_find_after_bigger(int to_return, int *pile1, t_index *index)
{
	int		i;

	i = index->i;
	while (i < index->argc)
	{
		if (pile1[i] == to_return)
			break ;
		i++;
	}
	to_return = pile1[i + 1];
	if (i == index->argc - 1)
		to_return = pile1[index->i];
	return (to_return);
}

int		ft_find_which_place_top_of_pa(int to_put, int *pile1,\
		t_index *index, t_datas *d)
{
	int		to_return;

	to_return = ft_find_smallest_bigger(to_put, pile1, index);
	if (to_return >= d->encadreur)
	{
		to_return = ft_find_bigger(to_put, pile1, index);
		to_return = ft_find_after_bigger(to_return, pile1, index);
	}
	return (to_return);
}
