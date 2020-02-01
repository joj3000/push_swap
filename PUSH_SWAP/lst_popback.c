/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_popback.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 12:44:57 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 16:34:00 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_popback(t_lst **list)
{
	t_lst *tmp;
	t_lst *cpy;

	if (list == NULL)
		return ;
	if (lst_size(*list) == 1)
	{
		free(*list);
		*list = NULL;
		return ;
	}
	tmp = *list;
	while (tmp->next != NULL)
	{
		cpy = tmp;
		tmp = tmp->next;
	}
	cpy->next = NULL;
	free(tmp);
	tmp = NULL;
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
**	lst_popback(&listb);
**
**	lst_print_ab(listb, 'b');
**
**	write(1, "\n", 1);
**}
*/
