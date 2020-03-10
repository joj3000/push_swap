/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:39:35 by jerbs             #+#    #+#             */
/*   Updated: 2020/03/09 16:26:17 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_sort_pile1(int *pile1, t_index *index, t_datas *d)
{
	if (ft_is_sort(pile1, *index) == 1)
		return ;
	if (pile1[index->i] < pile1[index->i + 1])
		m_sa(pile1, index, d);
	else if (pile1[index->i] > pile1[index->i + 1] &&\
			pile1[index->i + 1] < pile1[index->i + 2])
		m_sa(pile1, index, d);
	else
	{
		m_ra(pile1, index, d);
		m_sa(pile1, index, d);
	}
}

static void	ft_normin_boucle(int *pile1, int *pile2, t_index *index, t_datas *d)
{
	int		to_place;

	to_place = ft_find_which_place_top_of_pa(pile2[index->j], pile1, index, d);
	find_road_a(to_place, pile1, index, d);
	m_pa(pile1, pile2, index, d);
}

void		ft_sort_for_less_ten(int *pile1, int nb)
{
	int		*pile2;
	t_index index;
	t_datas d;

	if (!(d.save = malloc(sizeof(char) * 1000)))
		return ;
	if (!(pile2 = malloc(sizeof(int) * nb + 1)))
		return ;
	index.i = 0;
	index.j = 0;
	index.argc = nb;
	d.save_index = 0;
	d.encadreur = nb - 1;
	while (index.i < nb - 3)
		m_pb(pile1, pile2, &index, &d);
	ft_sort_pile1(pile1, &index, &d);
	while (index.j > 0)
		ft_normin_boucle(pile1, pile2, &index, &d);
	find_road_a(0, pile1, &index, &d);
	ft_put_instr(d.save, d.save_index);
	free(d.save);
	free(pile2);
}
