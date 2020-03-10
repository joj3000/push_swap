/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:45:19 by jerbs             #+#    #+#             */
/*   Updated: 2020/03/09 16:27:13 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_norme_boucle1(int *pile1, int *pile2, t_index *index, t_datas *d)
{
	d->to_put = find_closest_in_the_n_biggest_to_x(pile2, index, d->n, d->x);
	ft_find_road_b(d->to_put, pile2, index, d);
	m_pa(pile1, pile2, index, d);
	d->x = d->to_put;
}

void	ft_norme_boucle2(int *pile1, int *pile2, t_index *index, t_datas *d)
{
	int		to_place;

	d->to_put = find_closest_in_the_n_smallest_from_x(pile2, index, d->n, d->x);
	ft_find_road_b(d->to_put, pile2, index, d);
	to_place = ft_find_which_place_top_of_pa(d->to_put, pile1, index, d);
	find_road_a(to_place, pile1, index, d);
	m_pa(pile1, pile2, index, d);
	d->x = d->to_put;
}

void	ft_norme_boucle3(int *pile1, int *pile2, t_index *index, t_datas *d)
{
	int		to_place;

	d->to_put = find_closest_in_the_n_biggest_to_x(pile2, index, d->n, d->x);
	ft_find_road_b(d->to_put, pile2, index, d);
	to_place = ft_find_which_place_top_of_pa(d->to_put, pile1, index, d);
	find_road_a(to_place, pile1, index, d);
	m_pa(pile1, pile2, index, d);
	d->x = d->to_put;
}

void	ft_norme_boucle4(int *pile1, int *pile2, t_index *index, t_datas *d)
{
	int		to_place;

	d->to_put = find_closest_in_the_n_biggest_to_x(pile2, index, d->n, d->x);
	ft_find_road_b(d->to_put, pile2, index, d);
	to_place = ft_find_which_place_top_of_pa(d->to_put, pile1, index, d);
	find_road_a(to_place, pile1, index, d);
	m_pa(pile1, pile2, index, d);
	d->x = d->to_put;
}

void	ft_norme_boucle4bis(int *pile1, int *pile2, t_index *index, t_datas *d)
{
	int		to_place;

	d->to_put = find_closest_in_the_n_smallest_from_x(pile2, index, d->n, d->x);
	ft_find_road_b(d->to_put, pile2, index, d);
	to_place = ft_find_which_place_top_of_pa(d->to_put, pile1, index, d);
	find_road_a(to_place, pile1, index, d);
	m_pa(pile1, pile2, index, d);
	d->x = d->to_put;
}
