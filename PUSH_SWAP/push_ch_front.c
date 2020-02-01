/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ch_front.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 17:52:25 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 16:29:38 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_ch_front(t_lst **list, char *s)
{
	t_lst *new;

	new = (t_lst *)malloc(sizeof(t_lst));
	new->a = ft_atol(s);
	new->next = (*list);
	(*list) = new;
}

/*
**int main()
**{
**	t_lst *list;
**	list = (t_lst *)malloc(sizeof(t_lst));
**	list = NULL;
**
**	list->a = 1;
**	list->next = NULL;
**	push_ch_front(&list, "6");
**
**	lst_print_ab(list, 'a');
**}
*/
