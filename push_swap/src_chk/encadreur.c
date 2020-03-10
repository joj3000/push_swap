/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   encadreur.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:08:10 by jerbs             #+#    #+#             */
/*   Updated: 2020/03/09 16:23:46 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			ft_module_encadreur(t_index *index, int nb_appel,\
		int med, int pack_size)
{
	int		encadreur;

	encadreur = index->argc - (nb_appel * pack_size) + med + pack_size % 2;
	if (nb_appel == 4)
		encadreur = pack_size / 2 + pack_size % 2;
	return (encadreur);
}

static void	ft_boucle_norme3(int *pile1, int *pile2,\
		t_index *index, t_datas *d)
{
	if (pile2[index->j] >= d->encadreur &&\
			pile2[index->j] < d->encadreur + d->med)
	{
		m_pa(pile1, pile2, index, d);
		(d->i)++;
	}
	else
		m_rb(pile2, index, d);
}

void		ft_replace_pack_in_pile1(int *pile1, int *pile2,\
		t_index *index, t_datas *d)
{
	d->med = d->pack_size / 2;
	d->i = 0;
	d->encadreur = ft_module_encadreur(index, d->nb_appel,\
			d->med, d->pack_size);
	while (d->i < d->med)
		ft_boucle_norme3(pile1, pile2, index, d);
	ft_reput_sorted_to_pile1(pile1, pile2, index, d);
	d->i = 0;
	while (d->i < d->med)
		if (pile1[index->i] >= d->encadreur &&\
				pile1[index->i] < d->encadreur + d->med)
		{
			m_pb(pile1, pile2, index, d);
			(d->i)++;
		}
		else
			m_ra(pile1, index, d);
	d->encadreur += d->med;
	ft_reput_sorted_to_pile1(pile1, pile2, index, d);
}
