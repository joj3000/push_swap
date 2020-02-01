/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   if_rev_sorted_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 12:13:02 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 20:10:00 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	if_rev_sorted_a(t_lst **list)
{
	t_lst *tmp;

	tmp = (*list);
	while (tmp->next)
	{
		if (tmp->a > (tmp->next)->a)
			return (0);
		tmp = tmp->next;
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
**
**	listb1->a = 1;
**	listb2->a = 2;
**	listb3->a = 3;
**	listb4->a = 4;
**
**	listb4->next = NULL;
**	listb3->next = listb4;
**	listb2->next = listb3;
**	listb1->next = listb2;
**
**
**	printf("%d\n", if_rev_sorted_a(&listb1));
**}
*/
