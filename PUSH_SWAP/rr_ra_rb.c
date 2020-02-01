/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_ra_rb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 11:21:40 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 20:11:15 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr_ra_rb(t_lst **lista, t_lst **listb)
{
	ra_rotate_a(lista);
	rb_rotate_b(listb);
	write(1, "rr\n", 3);
}

/*
**#include <stdio.h>
**
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
**	t_lst *listb;
**	t_lst *tmpb;
**	t_lst *bb;
**
**	listb = (t_lst *)malloc(sizeof(t_lst));
**	tmpb = (t_lst *)malloc(sizeof(t_lst));
**	bb = (t_lst *)malloc(sizeof(t_lst));
**
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
**	rr_ra_rb(&list, &listb);
**	lst_print_ab(list, 'a');
**	write(1, "\n", 1);
**	lst_print_ab(listb, 'b');
**	write(1, "\n", 1);
**}
*/
