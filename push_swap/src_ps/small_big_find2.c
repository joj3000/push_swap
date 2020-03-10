/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_big_find2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:24:09 by jerbs             #+#    #+#             */
/*   Updated: 2020/03/09 15:24:19 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_biggest(int *smallest, int n)
{
	int		i;
	int		max;

	max = 0;
	i = 0;
	while (i < n)
	{
		if (smallest[i] > max)
			max = smallest[i];
		i++;
	}
	return (max);
}

int		ft_biggest_pos(int *smallest, int n)
{
	int		i;
	int		pos;
	int		max;

	max = 0;
	i = 0;
	pos = 0;
	while (i < n)
	{
		if (smallest[i] > max)
		{
			max = smallest[i];
			pos = i;
		}
		i++;
	}
	return (pos);
}

int		find_closest_in_the_n_smallest_from_x(int *pile2,\
		t_index *index, int n, int x)
{
	int		i;
	int		*smallest;
	int		to_return;

	i = 0;
	if (!(smallest = malloc(sizeof(int) * n)))
		return (-1);
	while (i < n)
	{
		smallest[i] = index->argc * 2;
		i++;
	}
	i = index->j;
	while (i > 0)
	{
		if (pile2[i] < ft_biggest(smallest, n) && pile2[i] > x)
			smallest[ft_biggest_pos(smallest, n)] = pile2[i];
		i--;
	}
	to_return = find_closest(smallest, n, pile2, index);
	free(smallest);
	return (to_return);
}
