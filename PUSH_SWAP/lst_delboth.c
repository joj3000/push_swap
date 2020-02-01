/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_delboth.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 13:19:53 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 20:27:59 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_delboth(t_lst **lsta, t_lst **lstb)
{
	t_lst *tmp;

	while ((*lsta))
	{
		tmp = (*lsta);
		(*lsta) = (*lsta)->next;
		free(tmp);
		tmp = NULL;
	}
	while ((*lstb))
	{
		tmp = (*lstb);
		(*lstb) = (*lstb)->next;
		free(tmp);
		tmp = NULL;
	}
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
**	lst_delboth(&lista, &listb);
**
**	write(1, "\nnow list b =", 13);
**	lst_print_ab(listb, 'b');
**	write(1, "\n", 1);
**	write(1, "list a =", 8);
**	lst_print_ab(lista, 'a');
**	write(1, "\n", 1);
**
**	write(1, "\n", 1);
**}
*/
