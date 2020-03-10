/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_in_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:20:59 by jerbs             #+#    #+#             */
/*   Updated: 2020/03/09 16:24:22 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		sim_rra(int *pile, int j, int to_find)
{
	int		i;
	t_index n;

	n.i = j;
	i = 0;
	while (pile[j] != to_find)
	{
		i_rra(pile, &n);
		i++;
	}
	return (i);
}

int		sim_ra(int *pile, int j, int to_find)
{
	int		i;
	t_index n;

	n.i = j;
	i = 0;
	while (pile[j] != to_find)
	{
		i_ra(pile, &n);
		i++;
	}
	return (i);
}

void	find_road_a(int to_find, int *pile1, t_index *n, t_datas *d)
{
	int		*tmp;
	int		*tmp2;

	if (!(tmp = malloc(sizeof(int) * n->argc)))
		return ;
	if (!(tmp2 = malloc(sizeof(int) * n->argc)))
		return ;
	ft_cop(pile1, tmp, n->argc);
	ft_cop(pile1, tmp2, n->argc);
	if (n->i != n->argc - 1)
	{
		if (sim_ra(tmp, n->j, to_find) > sim_rra(tmp2, n->i, to_find))
		{
			while (pile1[n->i] != to_find)
				m_rra(pile1, n, d);
		}
		else
		{
			while (pile1[n->i] != to_find)
				m_ra(pile1, n, d);
		}
	}
	free(tmp);
	free(tmp2);
}
