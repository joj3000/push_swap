/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr_revrotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 19:13:33 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 19:46:32 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr_rra_rrb(t_lst **lista, t_lst **listb)
{
	rra_revrotate_a(lista);
	rrb_revrotate_b(listb);
	write(1, "rrr\n", 4);
}

/*
**int main()
**{
**	t_lst *list;
**	t_lst *tmp;
**	t_lst *b;
**	list = (t_lst *)malloc(sizeof(t_lst));
**	tmp = (t_lst *)malloc(sizeof(t_lst));
**	b = (t_lst *)malloc(sizeof(t_lst));
**	list->a = 1;
**	tmp->a = 2;
**	b->a = 3;
**	b->next = NULL;
**	tmp->next = b;
**	list->next = tmp;
**	t_lst *listb;
**	t_lst *tmpb;
**	t_lst *bb;
**	listb = (t_lst *)malloc(sizeof(t_lst));
**	tmpb = (t_lst *)malloc(sizeof(t_lst));
**	bb = (t_lst *)malloc(sizeof(t_lst));
**	listb->b = 4;
**	tmpb->b = 5;
**	bb->b = 6;
**	bb->next = NULL;
**	tmpb->next = bb;
**	listb->next = tmpb;
**	lst_print_ab(list, 'a');
**	write(1, "\n", 1);
**	lst_print_ab(listb, 'b');
**	write(1, "\n", 1);
**	list = ra_rotate_a(list);
**	listb = rb_rotate_b(listb);
**	rrr_rra_rrb(&list, &listb);
**	lst_print_ab(list, 'a');
**	write(1, "\n", 1);
**	lst_print_ab(listb, 'b');
**	write(1, "\n", 1);
**}
*/
