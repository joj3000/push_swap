/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_pushback.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 13:33:22 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 20:08:50 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_pushback(t_lst **list, t_lst **toadd)
{
	t_lst *tmp;

	tmp = *list;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = *toadd;
}

/*
**int main()
**{
**	t_lst *list;
**	t_lst *tmp;
**	list = (t_lst *)malloc(sizeof(t_lst));
**	tmp = (t_lst *)malloc(sizeof(t_lst));
**	list->a = 1;
**	tmp->a = 2;
**	tmp->next = NULL;
**	list->next = tmp;
**	t_lst *B;
**	B = (t_lst *)malloc(sizeof(t_lst));
**	B->a = 3;
**	B->next = NULL;
**	lst_print_ab(list, 'a');
**	write(1, "\n", 1);
**
**	lst_pushback(list, B);
**
**	lst_print_ab(list, 'a');
**
**	write(1, "\n", 1);
**
**
**}
*/
