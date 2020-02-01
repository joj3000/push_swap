/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distance_til.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 18:40:35 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 19:53:38 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	distance_til(t_lst *listb, int n)
{
	int count;

	count = 0;
	while (listb)
	{
		if (listb->b == n)
			return (count);
		count++;
		listb = listb->next;
	}
	return (count);
}

/*
**int main()
**{
**	t_lst *listb;
**	t_lst *listb1;
**	t_lst *listb2;
**	t_lst *listb3;
**	t_lst *listb4;
**	t_lst *listb5;
**	t_lst *listb6;
**
**	listb = (t_lst *)malloc(sizeof(t_lst));
**	listb1 = (t_lst *)malloc(sizeof(t_lst));
**	listb2 = (t_lst *)malloc(sizeof(t_lst));
**	listb3 = (t_lst *)malloc(sizeof(t_lst));
**	listb4 = (t_lst *)malloc(sizeof(t_lst));
**	listb5 = (t_lst *)malloc(sizeof(t_lst));
**	listb6 = (t_lst *)malloc(sizeof(t_lst));
**
**	listb->b = 3;
**	listb1->b = 1;
**	listb2->b = 2;
**	listb3->b = 9;
**	listb4->b = 7;
**	listb5->b = 8;
**	listb6->b = 0;
**
**	listb6->next = NULL;
**	listb5->next = listb6;
**	listb4->next = listb5;
**	listb3->next = listb4;
**	listb2->next = listb3;
**	listb1->next = listb2;
**	listb->next = listb1;
**
**	printf("%d\n", distance_til(listb, 8));
**
**	lst_print_ab(listb, 'b');
**	write(1, "\n", 1);
**}
*/
