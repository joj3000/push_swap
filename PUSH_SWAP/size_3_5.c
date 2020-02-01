/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_3_5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 15:47:51 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 15:48:29 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	size_3_5(t_lst **lista, t_lst **listb1)
{
	t_lst *last;

	pb_push_b(listb1, lista);
	pb_push_b(listb1, lista);
	size_3(lista);
	while (*listb1)
	{
		last = *listb1;
		while (last->next != NULL)
			last = last->next;
		if (biglowin_a(*lista, last->b) == 1)
			while (is_top_a(*lista, lowest_a(*lista)) != 1)
				rra_revrotate_a(lista);
		else if (biglowin_a(*lista, last->b) == -1)
			while (is_top_a(*lista, lowest_a(*lista)) != 1)
				rra_revrotate_a(lista);
		else if (biglowin_a(*lista, last->b) == 0)
			while (is_top_a(*lista, highest_af_a(*lista, last->b)) != 1)
				rra_revrotate_a(lista);
		pa_push_a(lista, listb1);
	}
	while (is_a_sorted(*lista) == 0)
		ra_rotate_a(lista);
}
