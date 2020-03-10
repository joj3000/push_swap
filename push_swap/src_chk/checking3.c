/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:13:25 by jerbs             #+#    #+#             */
/*   Updated: 2020/03/09 16:30:35 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	i_sa(int *pile1, t_index *n)
{
	int		tmp;

	if ((*n).i < (*n).argc - 1)
	{
		tmp = pile1[(*n).i];
		pile1[(*n).i] = pile1[(*n).i + 1];
		pile1[(*n).i + 1] = tmp;
	}
}

void	i_sb(int *pile2, t_index *n)
{
	int		tmp;

	if ((*n).j > 0)
	{
		tmp = pile2[(*n).j];
		pile2[(*n).j] = pile2[(*n).j - 1];
		pile2[(*n).j - 1] = tmp;
	}
}

void	i_ss(int *pile1, int *pile2, t_index *n)
{
	i_sa(pile1, n);
	i_sb(pile2, n);
}

void	i_pa(int *pile1, int *pile2, t_index *n)
{
	if ((*n).j > -1)
	{
		(*n).i -= 1;
		pile1[(*n).i] = pile2[(*n).j];
		(*n).j -= 1;
	}
}

void	i_pb(int *pile1, int *pile2, t_index *n)
{
	if ((*n).i < (*n).argc)
	{
		(*n).j += 1;
		pile2[(*n).j] = pile1[(*n).i];
		(*n).i += 1;
	}
}
