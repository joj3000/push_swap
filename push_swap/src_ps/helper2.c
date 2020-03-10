/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:32:16 by jerbs             #+#    #+#             */
/*   Updated: 2020/03/09 15:32:17 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_supp_rrr(char *save, t_merge *m)
{
	int		k;

	k = m->j;
	while (k >= 0)
	{
		if (save[m->i + k] == 7)
		{
			save[m->i + k] = 9;
			break ;
		}
		k--;
	}
	k = m->j;
	while (k >= 0)
	{
		if (save[m->i + k] == 8)
		{
			save[m->i + k] = 0;
			break ;
		}
		k--;
	}
	(m->diff_rrr)--;
}

static void	ft_supp_rr(char *save, t_merge *m)
{
	int		k;

	k = m->j;
	while (k >= 0)
	{
		if (save[m->i + k] == 5)
		{
			save[m->i + k] = 10;
			break ;
		}
		k--;
	}
	k = m->j;
	while (k >= 0)
	{
		if (save[m->i + k] == 6)
		{
			save[m->i + k] = 0;
			break ;
		}
		k--;
	}
	(m->diff_rr)--;
}

void		ft_supp_doublons(char *save, t_merge m)
{
	while (m.diff_rrr > 0)
		ft_supp_rrr(save, &m);
	while (m.diff_rr > 0)
		ft_supp_rr(save, &m);
}
