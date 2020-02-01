/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_pushback_a.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 09:54:02 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/29 15:12:06 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_pushback_a(t_lst **list, int i)
{
	t_lst *new;
	t_lst *init;

	init = *list;
	new = (t_lst *)malloc(sizeof(t_lst));
	new->a = i;
	new->next = NULL;
	if (!(*list))
	{
		*list = new;
		return ;
	}
	while (init->next != NULL)
		init = init->next;
	init->next = new;
	return ;
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
**
**	list->a = 1;
**	tmp->a = 2;
**	b->a = 3;
**
**	b->next = NULL;
**	tmp->next = b;
**	list->next = tmp;
**
**	lst_print_ab(list, 'a');
**	write(1, "\n", 1);
**
**	lst_pushback_a(list, 0);
**	lst_pushback_a(list, -42);
**
**	lst_print_ab(list, 'a');
**
**	write(1, "\n", 1);
**
**
**}
*/
