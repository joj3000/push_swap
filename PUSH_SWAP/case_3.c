/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 12:53:49 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 20:13:04 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	case_3(t_lst **list)
{
	t_lst	*tmp;
	int		flag;

	flag = 0;
	tmp = *list;
	if (tmp->a > tmp->next->a && tmp->a > tmp->next->next->a)
		sa_swap_a(*list);
	else if (if_rev_sorted_a(list) == 1)
	{
		sa_swap_a(*list);
		rra_revrotate_a(list);
	}
	else if (tmp->a > tmp->next->a && tmp->a < tmp->next->next->a)
		ra_rotate_a(list);
	else if (tmp->a < tmp->next->a && tmp->a > tmp->next->next->a)
	{
		sa_swap_a(*list);
		ra_rotate_a(list);
	}
	else if (tmp->a < tmp->next->a && tmp->a < tmp->next->next->a)
		rra_revrotate_a(list);
}

/*
**int main()
**{
**
**	t_lst *listb1;
**	t_lst *listb2;
**	t_lst *listb3;
**	t_lst *lista;
**
**	listb1= (t_lst *)malloc(sizeof(t_lst));
**	listb2 = (t_lst *)malloc(sizeof(t_lst));
**	listb3 = (t_lst *)malloc(sizeof(t_lst));
**
**	listb1->a = 2;
**	listb2->a = 3;
**	listb3->a = 1;
**
**	listb3->next = NULL;
**	listb2->next = listb3;
**	listb1->next = listb2;
**
**
**	case_3(&listb1);
**	PS(&listb1, &lista);
**
**}
*/
