/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:12:41 by jerbs             #+#    #+#             */
/*   Updated: 2020/03/09 16:29:55 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	i_ra(int *pile1, t_index *n)
{
	int		i;
	int		tmp;

	i = (*n).i;
	tmp = pile1[i];
	while (i < (*n).argc - 1)
	{
		pile1[i] = pile1[i + 1];
		i++;
	}
	pile1[i] = tmp;
}

void	i_rb(int *pile2, t_index *n)
{
	int		j;
	int		tmp;

	j = (*n).j;
	tmp = pile2[j];
	while (j > 0)
	{
		pile2[j] = pile2[j - 1];
		j--;
	}
	pile2[j] = tmp;
}

void	i_rr(int *pile1, int *pile2, t_index *n)
{
	i_ra(pile1, n);
	i_rb(pile2, n);
}

void	i_rra(int *pile1, t_index *n)
{
	int		i;
	int		tmp;

	i = (*n).argc - 1;
	tmp = pile1[i];
	while (i > (*n).i)
	{
		pile1[i] = pile1[i - 1];
		i--;
	}
	pile1[i] = tmp;
}

void	i_rrb(int *pile2, t_index *n)
{
	int		j;
	int		tmp;

	j = 0;
	tmp = pile2[j];
	while (j < (*n).j)
	{
		pile2[j] = pile2[j + 1];
		j++;
	}
	pile2[j] = tmp;
}
