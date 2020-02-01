/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_a_sorted.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 18:59:07 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 20:02:22 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_a_sorted(t_lst *list)
{
	while (list->next != NULL)
	{
		if (list->a < (list->next)->a)
			return (0);
		list = list->next;
	}
	return (1);
}

/*
**int main()
**{
**
**	t_lst *listb1;
**	t_lst *listb2;
**	t_lst *listb3;
**	t_lst *listb4;
**
**	listb1= (t_lst *)malloc(sizeof(t_lst));
**	listb2 = (t_lst *)malloc(sizeof(t_lst));
**	listb3 = (t_lst *)malloc(sizeof(t_lst));
**	listb4 = (t_lst *)malloc(sizeof(t_lst));
**
**	listb1->a = 6;
**	listb2->a = 5;
**	listb3->a = 6;
**	listb4->a = 1;
**
**	listb4->next = NULL;
**	listb3->next = listb4;
**	listb2->next = listb3;
**	listb1->next = listb2;
**
**	t_lst *tmp;
**	tmp = listb1;
**	while (tmp)
**	{
**		write(1, &tmp->a, 1);
**		tmp = tmp->next;
**	}
**
**	printf("%d\n", is_a_sorted(listb1));
**}
*/
