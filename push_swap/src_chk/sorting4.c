/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:46:29 by jerbs             #+#    #+#             */
/*   Updated: 2020/03/09 16:26:55 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	boucle_pour_place_pack_in_pile2(int *pile1, int *pile2,\
		t_index *index, t_datas *d)
{
	if (pile1[index->i] >= d->encadreur &&\
			pile1[index->i] < d->encadreur + d->pack_size)
	{
		m_pb(pile1, pile2, index, d);
		(d->i)++;
	}
	else
		m_ra(pile1, index, d);
}

void	ft_place_pack_in_pile2_for_small(int *pile1, int *pile2,\
		t_index *index, t_datas *d)
{
	d->encadreur = index->argc - (d->nb_appel * d->pack_size);
	d->i = 0;
	if (d->nb_appel == 1)
		while (d->i < d->pack_size)
			boucle_pour_place_pack_in_pile2(pile1, pile2, index, d);
	else if (d->nb_appel > 1 && d->nb_appel < 4)
		while (pile1[index->i] != (index->argc - \
					(d->nb_appel - 1) * d->pack_size))
		{
			if (pile1[index->i] >= d->encadreur &&\
					pile1[index->i] < d->encadreur + d->pack_size)
				m_pb(pile1, pile2, index, d);
			else
				m_ra(pile1, index, d);
		}
}

void	ft_replace_pack_in_pile1_for_small(int *pile1, int *pile2,\
		t_index *index, t_datas *d)
{
	d->med = d->pack_size;
	d->encadreur = index->argc - (d->pack_size * d->nb_appel);
	if (d->nb_appel == 1)
		ft_reput_sorted_to_pile1_for_small(pile1, pile2, index, d);
	if (d->nb_appel == 2)
		ft_reput_sorted_to_pile1_for_small2(pile1, pile2, index, d);
}
