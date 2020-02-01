/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_6_more.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 15:45:37 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 19:55:34 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	part_1(t_lst **listb1)
{
	if (distance_til(*listb1, lowest(*listb1)) > lst_size(*listb1) / 2)
		while (is_top(*listb1, biggest(*listb1)) != 1)
			rb_rotate_b(listb1);
	else
		while (is_top(*listb1, biggest(*listb1)) != 1)
			rrb_revrotate_b(listb1);
}

void	part_2(t_lst **listb1)
{
	if (distance_til(*listb1, biggest(*listb1)) > lst_size(*listb1) / 2)
		while (is_top(*listb1, biggest(*listb1)) != 1)
			rb_rotate_b(listb1);
	else
		while (is_top(*listb1, biggest(*listb1)) != 1)
			rrb_revrotate_b(listb1);
}

void	part_3(t_lst **listb1, int k)
{
	if (distance_til(*listb1,
	lowest_bef(*listb1, k)) > lst_size(*listb1) / 2)
		while (is_top(*listb1, lowest_bef(*listb1, k)) != 1)
			rb_rotate_b(listb1);
	else
		while (is_top(*listb1, lowest_bef(*listb1, k)) != 1)
			rrb_revrotate_b(listb1);
}

void	size_6_more(t_lst **lista, t_lst **listb1)
{
	t_lst *tmp;

	pb_push_b(listb1, lista);
	while (*lista)
	{
		tmp = *lista;
		while (tmp->next)
			tmp = tmp->next;
		if (biglowin(*listb1, tmp->a) == -1)
			part_1(listb1);
		else if (biglowin(*listb1, tmp->a) == 1)
			part_2(listb1);
		else if (biglowin(*listb1, tmp->a) == 0)
			part_3(listb1, tmp->a);
		pb_push_b(listb1, lista);
	}
	while (is_top(*listb1, biggest(*listb1)) != 1)
		rb_rotate_b(listb1);
	while (*listb1)
		pa_push_a(lista, listb1);
}
