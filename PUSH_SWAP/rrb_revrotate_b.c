/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb_revrotate_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 12:16:07 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 20:07:51 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb_revrotate_b(t_lst **stack)
{
	t_lst	*temp;
	t_lst	*last;

	if (*stack && (*stack)->next)
	{
		last = (*stack);
		temp = (*stack)->next;
		while ((*stack)->next)
			(*stack) = (*stack)->next;
		(*stack)->next = last;
		last->next = NULL;
		(*stack) = temp;
		write(1, "rrb\n", 4);
	}
}

/*
**#include <stdio.h>
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
**	b->next = NULL;
**	tmp->next = b;
**	list->next = tmp;
**
**	lst_print_ab(list, 'a');
**	write(1, "\n", 1);
**
**	list = ra_rotate_a(list);
**	ft_lstrot(&list);
**
**	printf("%d\n", lst_size(list));
**	lst_print_ab(list, 'a');
**
**	write(1, "\n", 1);
**}
*/
