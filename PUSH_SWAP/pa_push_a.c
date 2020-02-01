/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_push_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 09:36:40 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 20:05:58 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa_push_a(t_lst **lsta, t_lst **lstb)
{
	t_lst *cpyb;

	if (!(*lstb))
		return ;
	cpyb = *lstb;
	while ((cpyb)->next != NULL)
		(cpyb) = (cpyb)->next;
	lst_pushback_a(lsta, (cpyb)->b);
	lst_popback(lstb);
	write(1, "pa\n", 3);
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
**	lista->a = 1;
**	tmp->b = 2;
**	listb->b = 3;
**
**	lista->next = NULL;
**	tmp->next = NULL;
**	listb->next = tmp;
**
**	write(1, "list b =", 8);
**	lst_print_ab(tmp, 'b');
**	write(1, "\n", 1);
**	write(1, "list a =", 8);
**	lst_print_ab(lista, 'a');
**	write(1, "\n", 1);
**
**	pa_push_a(&lista, &tmp);
**
**	write(1, "list b =", 8);
**	lst_print_ab(tmp, 'b');
**	write(1, "\n", 1);
**	write(1, "list a =", 8);
**	lst_print_ab(lista, 'a');
**	write(1, "\n", 1);
**
**	write(1, "\n", 1);
**}
*/
