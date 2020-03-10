/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:34:06 by jerbs             #+#    #+#             */
/*   Updated: 2020/03/09 16:12:45 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	m_sa(int *pile1, t_index *n, t_datas *d)
{
	int		tmp;

	d->save[(d->save_index)++] = 1;
	if ((*n).i < (*n).argc - 1)
	{
		tmp = pile1[(*n).i];
		pile1[(*n).i] = pile1[(*n).i + 1];
		pile1[(*n).i + 1] = tmp;
	}
}

void	m_sb(int *pile2, t_index *n, t_datas *d)
{
	int		tmp;

	d->save[(d->save_index)++] = 2;
	if ((*n).j > 0)
	{
		tmp = pile2[(*n).j];
		pile2[(*n).j] = pile2[(*n).j - 1];
		pile2[(*n).j - 1] = tmp;
	}
}

void	m_ss(int *pile1, int *pile2, t_index *n, t_datas *d)
{
	m_sa(pile1, n, d);
	m_sb(pile2, n, d);
}

void	m_pa(int *pile1, int *pile2, t_index *n, t_datas *d)
{
	d->save[(d->save_index)++] = 3;
	if ((*n).j > -1)
	{
		(*n).i -= 1;
		pile1[(*n).i] = pile2[(*n).j];
		(*n).j -= 1;
	}
}

void	m_pb(int *pile1, int *pile2, t_index *n, t_datas *d)
{
	d->save[(d->save_index)++] = 4;
	if ((*n).i < (*n).argc)
	{
		(*n).j += 1;
		pile2[(*n).j] = pile1[(*n).i];
		(*n).i += 1;
	}
}
