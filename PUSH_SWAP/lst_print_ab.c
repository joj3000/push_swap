/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_print_ab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 21:08:22 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 20:01:35 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_print_ab(t_lst *list, char ab)
{
	if (!list)
		return ;
	if (ab == 'a')
		while (list != NULL)
		{
			ft_putllnbr(list->a);
			list = list->next;
		}
	else if (ab == 'b')
		while (list != NULL)
		{
			ft_putllnbr(list->b);
			list = list->next;
		}
}

/*
**int main()
**{
**	t_lst *list;
**	t_lst *tmp;
**	t_lst *b;
**	t_lst *first;
**
**	first = (t_lst *)malloc(sizeof(t_lst));
**	list = (t_lst *)malloc(sizeof(t_lst));
**	tmp = (t_lst *)malloc(sizeof(t_lst));
**	b = (t_lst *)malloc(sizeof(t_lst));
**
**	first->first = strdup("first");
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
**	lst_print_a(list);
**
**	write(1, "\n", 1);
**}
*/
