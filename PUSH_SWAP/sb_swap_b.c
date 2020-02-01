/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb_swap_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 21:00:53 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/29 14:02:10 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb_swap_b(t_lst *list)
{
	t_lst *tmp;

	if (!list)
		return ;
	if (lst_size(list) == 1)
		return ;
	while (list->next != NULL)
	{
		tmp = list;
		list = list->next;
	}
	ft_swap(&(list->b), &(tmp->b));
	write(1, "sb\n", 3);
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
**	lst_print_a(list);
**	write(1, "\n", 1);
**
**	sa_swap_a(list);
**
**
**	lst_print_a(list);
**
**	write(1, "\n", 1);
**
**
**
**}
*/
