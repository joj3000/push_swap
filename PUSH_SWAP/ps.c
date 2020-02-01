/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 20:31:05 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 20:31:41 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ps(t_lst **lista, t_lst **listb)
{
	write(1, "\nlist a =", 9);
	lst_print_ab(*lista, 'a');
	write(1, "\n", 1);
	write(1, "list b =", 8);
	lst_print_ab(*listb, 'b');
	write(1, "\n", 1);
}

/*
**int main()
**{
**	t_lst *listb1;
**	t_lst *listb2;
**	t_lst *listb3;
**	t_lst *listb4;
**
**	t_lst *lista;
**	lista = NULL;
**	listb1= (t_lst *)malloc(sizeof(t_lst));
**	listb2 = (t_lst *)malloc(sizeof(t_lst));
**	listb3 = (t_lst *)malloc(sizeof(t_lst));
**	listb4 = (t_lst *)malloc(sizeof(t_lst));
**
**
**	listb1->b = 5;
**	listb2->b = 8;
**	listb3->b = 9;
**	listb4->b = 2;
**
**	listb4->next = NULL;
**	listb3->next = listb4;
**	listb2->next = listb3;
**	listb1->next = listb2;
**
**
**	print_stacks(&lista, &listb1);
**}
*/
