/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_popfront.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 12:10:40 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 16:32:26 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_popfront(t_lst **list)
{
	t_lst *elem;

	if (!list)
		return ;
	elem = (*list)->next;
	free(*list);
	*list = NULL;
	*list = elem;
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
**	lista->b = 1;
**	tmp->b = 2;
**	listb->b = 3;
**
**	lista->next = NULL;
**	tmp->next = lista;
**	listb->next = tmp;
**
**	lst_print_ab(listb, 'b');
**	lst_print_ab(tmp, 'b');
**	lst_print_ab(lista, 'b');
**	write(1, "\n", 1);
**
**	lst_popfront(&listb);
**
**	lst_print_ab(listb, 'b');
**
**	write(1, "\n", 1);
**}
*/
