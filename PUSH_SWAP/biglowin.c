/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biglowin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jerbs <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 11:49:22 by jerbs             #+#    #+#             */
/*   Updated: 2020/01/30 16:30:26 by jerbs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	biglowin(t_lst *listb, int n)
{
	int low;
	int big;

	low = 0;
	big = 0;
	while (listb)
	{
		if (n > listb->b)
			big = 1;
		if (n < listb->b)
			low = 1;
		listb = listb->next;
	}
	if (low == 1 && big == 1)
		return (0);
	else if (low == 1)
		return (-1);
	else
		return (1);
}

/*
**int main()
**{
**	t_lst *listb1;
**	t_lst *listb2;
**	t_lst *listb3;
**	t_lst *listb4;
**
**	t_lst *lista;
**	lista = (t_lst *)malloc(sizeof(t_lst));
**	lista->a = 1;
**	lista->next = NULL;
**
**	listb1= (t_lst *)malloc(sizeof(t_lst));
**	listb2 = (t_lst *)malloc(sizeof(t_lst));
**	listb3 = (t_lst *)malloc(sizeof(t_lst));
**	listb4 = (t_lst *)malloc(sizeof(t_lst));
**
**	listb1->b = 3;
**	listb2->b = 5;
**	listb3->b = 9;
**	listb4->b = 2;
**
**	listb4->next = NULL;
**	listb3->next = listb4;
**	listb2->next = listb3;
**	listb1->next = listb2;
**
**
**printf("%d\n", biglowin(listb1, lista->a));
**
**	write(1, "list a =", 8);
**	lst_print_ab(lista, 'a');
**	write(1, "\n", 1);
**	write(1, "list b =", 8);
**	lst_print_ab(listb1, 'b');
**	write(1, "\n", 1);
**
**}
*/
