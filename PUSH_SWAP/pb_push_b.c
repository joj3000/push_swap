/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 19:40:30 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 20:07:04 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb_push_b(t_lst **lstb, t_lst **lsta)
{
	t_lst *cpya;

	if (!(*lsta))
		return ;
	cpya = *lsta;
	while ((cpya)->next != NULL)
		(cpya) = (cpya)->next;
	lst_pushback_b(lstb, (cpya)->a);
	lst_popback(lsta);
	write(1, "pb\n", 3);
}

/*
**int main()
**{
**	t_lst *lista;
**	t_lst *tmp;
**	t_lst *listb;
**
**	lista = (t_lst *)malloc(sizeof(t_lst));
**	tmp = (t_lst *)malloc(sizeof(t_lst));
**	listb = (t_lst *)malloc(sizeof(t_lst));
**
**	listb->b = 1;
**	tmp->a = 2;
**	lista->a = 3;
**
**	listb->next = NULL;
**	tmp->next = NULL;
**	lista->next = tmp;
**
**	write(1, "list a =", 8);
**	lst_print_ab(lista, 'a');
**	write(1, "\n", 1);
**	write(1, "list b =", 8);
**	lst_print_ab(listb, 'b');
**	write(1, "\n", 1);
**
**	pb_push_b(&listb, &lista);
**
**	write(1, "list a =", 8);
**	lst_print_ab(lista, 'a');
**	write(1, "\n", 1);
**	write(1, "list b =", 8);
**	lst_print_ab(listb, 'b');
**	write(1, "\n", 1);
**
**	write(1, "\n", 1);
**}
*/
