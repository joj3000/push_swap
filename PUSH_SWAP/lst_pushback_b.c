/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_pushback_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 09:51:42 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 19:48:03 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_pushback_b(t_lst **list, int i)
{
	t_lst *new;
	t_lst *init;

	init = *list;
	new = (t_lst *)malloc(sizeof(t_lst));
	new->b = i;
	new->next = NULL;
	if (!(*list))
	{
		*list = new;
		return ;
	}
	while ((init)->next != NULL)
		(init) = (init)->next;
	(init)->next = new;
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
**	list->b = 1;
**	tmp->b = 2;
**	b->b = 3;
**
**	b->next = NULL;
**	tmp->next = b;
**	list->next = tmp;
**
**	lst_print_ab(list, 'b');
**	write(1, "\n", 1);
**
**	lst_pushback(list, 0);
**
**	lst_print_ab(list, 'b');
**
**	write(1, "\n", 1);
**
**
**}
*/
