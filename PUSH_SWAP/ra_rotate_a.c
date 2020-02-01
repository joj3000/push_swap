/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rotate_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 12:22:16 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 19:47:24 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra_rotate_a(t_lst **list)
{
	t_lst	*tmp;
	t_lst	*elem;

	if (*list && (*list)->next)
	{
		tmp = (*list);
		while (tmp->next)
		{
			elem = tmp;
			tmp = tmp->next;
		}
		elem->next = NULL;
		tmp->next = (*list);
		(*list) = tmp;
		write(1, "ra\n", 3);
	}
}
/*
**int main()
**{
**	t_lst *list;
**	t_lst *tmp;
**	t_lst *b;
**
**	list = (t_lst *)malloc(sizeof(t_lst));
**	tmp = (t_lst *)malloc(sizeof(t_lst));
**	b = (t_lst *)malloc(sizeof(t_lst));
**
**	list->a = 1;
**	tmp->a = 2;
**	b->a = 3;
**
**	b->next = NULL;
**	tmp->next = b;
**	list->next = tmp;
**
**	lst_print_ab(list, 'a');
**	write(1, "\n", 1);
**
**	lst_revrotate(&list);
**
**	lst_print_ab(list, 'a');
**
**	write(1, "\n", 1);
**
**
**}
*/
