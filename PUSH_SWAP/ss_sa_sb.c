/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_sa_sb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 12:20:26 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 19:45:24 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss_sa_sb(t_lst *a, t_lst *b)
{
	sa_swap_a(a);
	sb_swap_b(b);
	write(1, "ss\n", 3);
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
**	list->a = 1;
**	tmp->a = 2;
**	b->a = 3;
**	list->b = -1;
**	tmp->b= -2;
**	b->b = -3;
**	b->next = NULL;
**	tmp->next = b;
**	list->next = tmp;
**	write(1, "previous = ", 12);
**	lst_print_ab(list, 'a');
**	write(1, "  ", 1);
**	lst_print_ab(list, 'a');
**	write(1, "\nnow = ", 8);
**	ss_swap_ab(list, list);
**	lst_print_ab(list, 'a');
**	write(1, "  ", 2);
**	lst_print_ab(list, 'a');
**}
*/
